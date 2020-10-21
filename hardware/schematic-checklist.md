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

* [X] CAD ERC 100% clean. If some errors are invalid due to toolchain quirks, each exception must be inspected and signed off as invalid.
* [X] Verify pin numbers of all schematic symbols against datasheet or external interface specification document (if not yet board proven).
* [X] Schematic symbol matches chosen component package
* [X] Thermal pads are connected to correct power rail (may not always be ground)
* [X] Debug interfaces are not power gated in sleep mode

* [X] FETs have pull-ups / -downs?
* [X] BJTs properly biased for both levels and current?
* [X] Chip selects have pull-ups / -downs?
* [X] Pull-up / -down resistors appropriate value for expected environment/noise?
* [X] Enable pins checked for polarity. Not all datasheets indicate this well, pin description text checked? Part number verified for ICs with orderable polarity configurations?
* [X] Shutdown pins checked for polarity?
* [X] Enable and shutdown pins pulled to the correct level when not under control? (e.g. shut down unless controlled)
* [X] Address select pins properly tied / pulled to the correct level?
* [X] Pull-ups on open-drain, open-collector nets? Values for required slew rates / throughput / noise?
* [X] Input / output pairs matched for all single-ended transceivers? (e.g. RX->TX, TX->RX for UART)
* [X] Differential pairs Polarity checked? (e.g. H/L for CAN, D+/D- for USB)
* [X] Passive / buffered visual indicators (e.g. LEDs) at appropriate level for the idle level of the protocol? (e.g. UART idle high, SPI clock idle low, etc)
* [X] High-speed lines have appropriate series termination?
* [X] Crystals have load capacitors if required? Stray capacitance of PCB trace factored in?
* [X] Trimming potentiometers and capacitors increase their value when turned clockwise?
* [X] Exposed pads on no-leads packages tied to correct net? Needs to be left floating?
* [X] FPGAs have built-in configuration flash or external flash available if not?
* [X] MCUs have built-in program flash or external flash available if not?
* [X] MCUs have enough flash for debugging routines and unoptimized code?
* [X] Bootloaders factored into flash space?

## Passive components

* [X] Power/voltage/tolerance ratings specified as required
* [X] Ceramic capacitors appropriately de-rated for C/V curve
* [X] Polarized components specified in schematic if using electrolytic caps etc

## Power supply

### System power input

* [X] Fusing and/or reverse voltage protection at system power inlet
* [X] Check total input capacitance and add inrush limiter if needed

### Regulators

* [X] Under/overvoltage protection configured correctly if used
* [X] Verify estimated power usage per rail against regulator rating
* [X] Current-sense resistors on power rails after regulator output caps, not in switching loop
* [X] Remote sense used on low voltage or high current rails
* [X] Linear regulators and voltage reference ICs are stable with selected output cap ESR
* [X] Confirm power rail sequencing against device datasheets

### Decoupling

* [X] Decoupling present for all ICs
* [X] Decoupling meets/exceeds vendor recommendations if specified
* [X] Bulk decoupling present at PSU

### General

* [X] All power inputs fed by correct voltage
* [X] Check high-power discrete semiconductors and passives to confirm they can handle expected load
* [X] Analog rails filtered/isolated from digital circuitry as needed

## Signals

### Digital

* [X] Signals are correct logic level for input pin
* [X] Pullups on all open-drain outputs
* [X] Pulldowns on all PECL outputs
* [X] Termination on all high-speed signals
* [X] AC coupling caps on gigabit transceivers
* [X] TX/RX paired correctly for UART, SPI, MGT, etc
* [X] Differential pair polarity / pairing correct
* [X] Active high/low enable signal polarity correct
* [X] I/O banking rules met on FPGAs etc

### Analog

* [X] RC time constant for attenuators sane given ADC sampling frequency
* [X] Verify frequency response of RF components across entire operating range. Don't assume a "1-100 MHz" amplifier has the same gain across the whole range.
* [X] Verify polarity of op-amp feedback

### Clocks

* [X] All oscillators meet required jitter / frequency tolerance. Be extra cautious with MEMS oscillators as these tend to have higher jitter.
* [X] Correct load caps provided for discrete crystals
* [X] Crystals only used if IC has an integrated crystal driver
* [X] Banking / clock capable input rules met for clocks going to FPGAs
* [X] Xilinx FPGAs: single ended clocks use _P half of differential pairs
* [X] If possible, create dummy design with all clocks and other key signals and verify it P&R's properly

### Strap/init pins

* [X] Pullup/pulldowns on all signals that need defined state at boot
* [X] Strap pins connected to correct rail for desired state
* [ ] JTAG/ICSP connector provided for all programmable devices
* [X] Config/boot flash provided for all FPGAs or MPUs without internal flash
* [X] Reference resistors correct value and reference rail

### External interface protection

* [X] Power outputs (USB etc) current limited
* [X] ESD protection on data lines going off board

### Debugging / reworkability

* [X] Use 0-ohm resistors vs direct hard-wiring for strap pins when possible
* [X] Provide multiple ground clips/points for scope probes
* [X] Dedicated ground in close proximity to analog test points
* [X] Test points on all power rails
* [X] Test points on interesting signals which may need probing for bringup/debug

## Thermal

* [X] Power estimates for all large / high power ICs
* [X] Thermal calculations for all large / high power ICs
* [X] Specify heatsinks as needed

## In-Circuit Programming

* [X] Programming pins broken out?
* [X] Reset pins broken out?
* [X] Polarity / duration of reset nets checked? (e.g. must float during power-on, reset high? must be held for more than 100 µs?)
* [X] Pull-ups / -downs on reset nets?
* [X] Low-pass filters on reset nets in noisy environments or on external connectors? Discharge diode to bring filter low during power transients? Discharge diode on the output side of the filter?
* [X] FPGA external flash signals broken out and/or wired up to MCU?
* [X] If programming lines are shared, no drivers exist on line? (e.g. a receiver’s push-pull output)
* [X] Programming waveforms safe for downstream circuit?

## Watchdogs

* [X] Watchdog can be disabled during programming / debug?
* [X] If watchdog enabled / disabled via a jumper, configured so jumped enters programming / debug  mode? (Jumper can be omitted?)
* [X] Watchdog output resets all peripherals that require a specific startup state?
* [X] Watchdog output tied to write-protect pins if appropriate?

## USB

* [X] Serial termination resistors required or on-chip?
* [X] External pull-up/-down resistors required?
* [X] Can current be limited when the device is put in suspend mode?
* [X] Self-powered device does not drive VBUS?
* [X] Self-powered device pulls D+/D- only when VBUS is detected?

## Power

* [X] Power pins tied to correct voltage rail?
* [X] Dropout voltage of regulators checked against complete range/tolerance of source supply? Not just nominal/ideal rating.
* [X] Minimum load met for stability of all regulators?
* [X] Final circuit maximum load rechecked against regulator ratings?
* [X] Digital ICs have correct number and value of bypass capacitors for frequencies in use?
* [X] Bypass and output capacitor values checked for all regulators? Correctly derated? Appropriate  ESR for stability?
* [X] Analog rails properly decoupled with ferrites / inductors / capacitors?
* [X] Circuit held idle / safe / in reset until voltages are stable?
* [X] Voltage supervisor IC required  (used to hold in reset or signal power-good)?
* [X] Power rails have short-circuit / over-current protection at output connectors?
* [X] Power rails have appropriate current limiting?
* [X] Over-current protection checked for time-until-trip? Crowbar required? Load-switch required?
* [X] Over-current protection recovers automatically?
* [X] Power input rails need reverse-polarity protection? Appropriate type for allowable voltage drop? and current? If using a P-channel FET, check Rds(on)? Check Vgs?
* [X] Vgs clamped if less than input voltage?
* [X] Total bulk capacitance on any power rail warrant inrush limiting?

## Battery Chemistry

* [X] Average and peak currents checked? Efficiency and lifespan vary for different chemistries and peak current combinations.
* [X] Parallel cells require balancing? Internal resistance factored in? (e.g. parallel coin cells effectively drain each other)

## Sensors / Signal Conditioning

* [X] Temperature sensor exist if other sensors require temperature-compensation / calibration?
* [X] Source impedance of sensor checked? In-amp required?
* [X] Dividers and filters buffered with op-amp before ADC?
* [X] Op-amp stability checked given load capacitance on output?
* [X] Unused op-amps in dual or quad packages terminated?

## Connectors

* [X] Power and ground lines appropriately filtered at connector? Ferrites, etc.
* [X] Shield on shielded cable / connector appropriately decoupled and tied to ground?
* [X] Two boards with separate power supplies that share a data interface, share data ground? (e.g. RS-485)
* [X] If “large” ground potential differences are possible, current limited with low-value resistor?
* [X] If “very large” ground potential differences are possible, data grounds are floating with a single reference?
* [X] Have fully isolated supplies?
* [X] Power and its ground on same connector?
* [X] Power connectors different size / type than IO connectors?
* [X] Related inputs/outputs on same connector?
