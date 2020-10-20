# Schematic review checklist

Is the design passively or actively safe? For example, if an MCU or
FPGA is being programmed, held in reset, or in their POR, does the
circuit enter a safe / idle / known state? Is the circuit only “hot”
under control (can it be)?

Can all relevant environmental changes be detected? If changes in
environment indicate a change in operating state or mode, can they be
detected? Examples: VBUS high on a self-powered USB device, SD card in
socket, a particular connector plugged in, water ingress, etc.

BOM has full orderable part numbers including all options and sufixes.
BOM is complete including PCB, enclosure, screws, bags, accessories,
memory cards, manuals, customer boxes, labels, master shipping carton.

## General

* [ ] CAD ERC 100% clean. If some errors are invalid due to toolchain quirks, each exception must be inspected and signed
off as invalid.
* [ ] Verify pin numbers of all schematic symbols against datasheet or external interface specification document (if not yet board proven).
* [ ] Schematic symbol matches chosen component package
* [ ] Thermal pads are connected to correct power rail (may not always be ground)
* [ ] Debug interfaces are not power gated in sleep mode

* [ ] FETs have pull-ups / -downs?
* [ ] BJTs properly biased for both levels and current?
* [ ] Chip selects have pull-ups / -downs?
* [ ] Pull-up / -down resistors appropriate value for expected
      environment/noise?
* [ ] Enable pins checked for polarity. Not all datasheets indicate
      this well, pin description text checked? Part number verified
      for ICs with orderable polarity configurations?
* [ ] Shutdown pins checked for polarity?
* [ ] Enable and shutdown pins pulled to the correct level when not
      under control? (e.g. shut down unless controlled)
* [ ] Address select pins properly tied / pulled to the correct level?
* [ ] Pull-ups on open-drain, open-collector nets? Values for required
      slew rates / throughput / noise?
* [ ] Input / output pairs matched for all single-ended transceivers?
      (e.g. RX->TX, TX->RX for UART)
* [ ] Differential pairs Polarity checked? (e.g. H/L for CAN, D+/D-
      for USB)
* [ ] Passive / buffered visual indicators (e.g. LEDs) at appropriate
      level for the idle level of the protocol? (e.g. UART idle high,
      SPI clock idle low, etc)
* [ ] High-speed lines have appropriate series termination?
* [ ] Crystals have load capacitors if required? Stray capacitance of
      PCB trace factored in?
* [ ] Trimming potentiometers and capacitors increase their value when
      turned clockwise?
* [ ] Exposed pads on no-leads packages tied to correct net? Needs to
      be left floating?
* [ ] FPGAs have built-in configuration flash or external flash
      available if not?
* [ ] MCUs have built-in program flash or external flash available if
      not?
* [ ] MCUs have enough flash for debugging routines and unoptimized
      code?
* [ ] Bootloaders factored into flash space?

## Passive components

* [ ] Power/voltage/tolerance ratings specified as required
* [ ] Ceramic capacitors appropriately de-rated for C/V curve
* [ ] Polarized components specified in schematic if using electrolytic caps etc

## Power supply

### System power input

* [ ] Fusing and/or reverse voltage protection at system power inlet
* [ ] Check total input capacitance and add inrush limiter if needed

### Regulators

* [ ] Under/overvoltage protection configured correctly if used
* [ ] Verify estimated power usage per rail against regulator rating
* [ ] Current-sense resistors on power rails after regulator output caps, not in switching loop
* [ ] Remote sense used on low voltage or high current rails
* [ ] Linear regulators and voltage reference ICs are stable with selected output cap ESR
* [ ] Confirm power rail sequencing against device datasheets

### Decoupling

* [ ] Decoupling present for all ICs
* [ ] Decoupling meets/exceeds vendor recommendations if specified
* [ ] Bulk decoupling present at PSU

### General

* [ ] All power inputs fed by correct voltage
* [ ] Check high-power discrete semiconductors and passives to confirm
      they can handle expected load
* [ ] Analog rails filtered/isolated from digital circuitry as needed

## Signals

### Digital

* [ ] Signals are correct logic level for input pin
* [ ] Pullups on all open-drain outputs
* [ ] Pulldowns on all PECL outputs
* [ ] Termination on all high-speed signals
* [ ] AC coupling caps on gigabit transceivers
* [ ] TX/RX paired correctly for UART, SPI, MGT, etc
* [ ] Differential pair polarity / pairing correct
* [ ] Active high/low enable signal polarity correct
* [ ] I/O banking rules met on FPGAs etc

### Analog

* [ ] RC time constant for attenuators sane given ADC sampling frequency
* [ ] Verify frequency response of RF components across entire
      operating range. Don't assume a "1-100 MHz" amplifier has the
      same gain across the whole range.
* [ ] Verify polarity of op-amp feedback

### Clocks

* [ ] All oscillators meet required jitter / frequency tolerance. Be
      extra cautious with MEMS oscillators as these tend to have higher jitter.
* [ ] Correct load caps provided for discrete crystals
* [ ] Crystals only used if IC has an integrated crystal driver
* [ ] Banking / clock capable input rules met for clocks going to FPGAs
    * [ ] Xilinx FPGAs: single ended clocks use _P half of differential pairs
    * [ ] If possible, create dummy design with all clocks and other
          key signals and verify it P&R's properly

### Strap/init pins

* [ ] Pullup/pulldowns on all signals that need defined state at boot
* [ ] Strap pins connected to correct rail for desired state
* [ ] JTAG/ICSP connector provided for all programmable devices
* [ ] Config/boot flash provided for all FPGAs or MPUs without internal flash
* [ ] Reference resistors correct value and reference rail

### External interface protection

* [ ] Power outputs (USB etc) current limited
* [ ] ESD protection on data lines going off board

### Debugging / reworkability

* [ ] Use 0-ohm resistors vs direct hard-wiring for strap pins when
      possible
* [ ] Provide multiple ground clips/points for scope probes
* [ ] Dedicated ground in close proximity to analog test points
* [ ] Test points on all power rails
* [ ] Test points on interesting signals which may need probing for
      bringup/debug

## Thermal

* [ ] Power estimates for all large / high power ICs
* [ ] Thermal calculations for all large / high power ICs
* [ ] Specify heatsinks as needed

## In-Circuit Programming

* [ ] Programming pins broken out?
* [ ] Reset pins broken out?
* [ ] Polarity / duration of reset nets checked? (e.g. must float
      during power-on, reset high? must be held for more than 100 µs?)
* [ ] Pull-ups / -downs on reset nets?
* [ ] Low-pass filters on reset nets in noisy environments or on
      external connectors? Discharge diode to bring filter low during
      power transients? Discharge diode on the output side of the filter?
* [ ] FPGA external flash signals broken out and/or wired up to MCU?
* [ ] If programming lines are shared, no drivers exist on line? (e.g.
      a receiver’s push-pull output)
* [ ] Programming waveforms safe for downstream circuit?

## Watchdogs

* [ ] Watchdog can be disabled during programming / debug?
* [ ] If watchdog enabled / disabled via a jumper, configured so
      jumped enters programming / debug  mode? (Jumper can be omitted?)
* [ ] Watchdog output resets all peripherals that require a specific
      startup state?
* [ ] Watchdog output tied to write-protect pins if appropriate?

## USB

* [ ] Serial termination resistors required or on-chip?
* [ ] External pull-up/-down resistors required?
* [ ] Can current be limited when the device is put in suspend mode?
* [ ] Self-powered device does not drive VBUS?
* [ ] Self-powered device pulls D+/D- only when VBUS is detected?

## Power

* [ ] Power pins tied to correct voltage rail?
* [ ] Dropout voltage of regulators checked against complete
      range/tolerance of source supply? Not just nominal/ideal rating.
* [ ] Minimum load met for stability of all regulators?
* [ ] Final circuit maximum load rechecked against regulator ratings?
* [ ] Digital ICs have correct number and value of bypass capacitors
      for frequencies in use?
* [ ] Bypass and output capacitor values checked for all regulators?
      Correctly derated? Appropriate  ESR for stability?
* [ ] Analog rails properly decoupled with ferrites / inductors /
      capacitors?
* [ ] Circuit held idle / safe / in reset until voltages are stable?
* [ ] Voltage supervisor IC required  (used to hold in reset or signal
      power-good)?
* [ ] Power rails have short-circuit / over-current protection at
      output connectors?
* [ ] Power rails have appropriate current limiting?
* [ ] Over-current protection checked for time-until-trip? Crowbar
      required? Load-switch required?
* [ ] Over-current protection recovers automatically?
* [ ] Power input rails need reverse-polarity protection? Appropriate
      type for allowable voltage drop? and current? If using a
      P-channel FET, check Rds(on)? Check Vgs?
* [ ] Vgs clamped if less than input voltage?
* [ ] Total bulk capacitance on any power rail warrant inrush
      limiting?

## Battery Chemistry

* [ ] Average and peack currents checked? Efficiency and lifespan vary
      for different chemistries and peak current combinations.
* [ ] Parallel cells require balancing? Internal resistance factored
      in? (e.g. parallel coin cells effectively drain each other)

## Sensors / Signal Conditioning

* [ ] Temperature sensor exist if other sensors require
      temperature-compensation / calibration?
* [ ] Source impedance of sensor checked? In-amp required?
* [ ] Dividers and filters buffered with op-amp before ADC?
* [ ] Op-amp stability checked given load capacitance on output?
* [ ] Unused op-amps in dual or quad packages terminated?

## Connectors

* [ ] Power and ground lines appropriately filtered at connector?
      Ferrites, etc.
* [ ] Shield on shielded cable / connector appropriately decoupled and
      tied to ground?
* [ ] Two boards with separate power supplies that share a data
      interface, share data ground? (e.g. RS-485)
* [ ] If “large” ground potential differences are possible, current
      limited with low-value resistor?
* [ ] If “very large” ground potential differences are possible, data
      grounds are floating with a single reference?
* [ ] Have fully isolated supplies?
* [ ] Power and its ground on same connector?
* [ ] Power connectors different size / type than IO connectors?
* [ ] Related inputs/outputs on same connector?
