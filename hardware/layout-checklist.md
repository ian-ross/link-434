# Layout review checklist

## General

* [ ] [Schematic review](schematic-checklist.md) complete and signed
      off, including pin swaps done during layout
* [ ] DRC set up to fab constraints before layout starts?
* [ ] Layout DRC 100% clean
* [ ] Double check the drill vs annular ring size for vias?
* [ ] Fiducials required? Present?
* [ ] High-speed differential pairs not routed over broken ground plane?
* [ ] Passives have Traces coming into pads symmetrically? Traces
      comming into opposing “sides” of pads can cause solder
      migration, tombstoning, or stresses when the board cools.
* [ ] Margin to edge of board checked? Appropriate given board
      break-away (V-score or mouse bites)? Mouse bites can easily
      pull/crack solder mask at 20 mil in.
* [ ] Components can be reworked without removing others?
* [ ] Thermal reliefs for all pads of serviceable components?
* [ ] Does each component’s zeroed orientation match that of the
      orientation in the reel / insertion rotation offset checked?

## Decoupling

* [ ] Decoupling caps as close to power pins as possible
* [ ] Low inductance mounting used for decoupling (prefer ViP if
      available, otherwise "[]8" shaped side vias

## Bypassing

* [ ] Current/impedance matched? Equal trace widths and via counts?
* [ ] Appropriate number and size of vias for current?

## DFM / yield enhancement

* [ ] All design rules within manufacturer's capability
* [ ] Minimize use of vias/traces that push fab limits
* [ ] Controlled impedance specified in fab notes if applicable
* [ ] Confirm impedance calculations include soldermask, or mask
      removed from RF traces
* [ ] Stackup verified with manufacturer and specified in fab notes
* [ ] Board finish specified in fab notes
* [ ] If panelizing, add panel location indicators for identifying
      location-specific reflow issues
* [ ] (recommended) Layer number markers specified to ensure correct
      assembly
* [ ] Fiducials present (on both sides of board) if targeting
      automated assembly
* [ ] Fiducial pattern asymmetric to detect rotated or flipped boards
* [ ] Soldermask/copper clearance on fiducials respected
* [ ] Panelization specified if required

## Footprints

* [ ] Confirm components are available in the selected package
* [ ] Confirm components (especially connectors and power regulators)
      are capable of desired current in the selected package
* [ ] Verify schematic symbol matches the selected package
* [ ] Confirm pinout diagram is from top vs bottom of package
* [ ] (recommended) PCB printed 1:1 on paper and checked against
      physical parts
* [ ] 3D models obtained (if available) and checked against footprints
* [ ] Soldermask apertures on all SMT lands and PTH pads

## Differential pairs
* [ ] Routed differentially
* [ ] Skew matched
* [ ] Correct clearance to non-coupled nets

## High-speed signals

* [ ] Sufficient clearance to potential aggressors
* [ ] Length matched if required
* [ ] Minimize crossing reference plane splits/slots or changing
      layers, use caps/stitching vias if unavoidable
* [ ] Confirm fab can do copper to edge of PCB for edge launch connectors
* [ ] Double-check pad width on connectors and add plane cutouts if
      needed to minimize impedance discontinuities

## Power

* [ ] Minimal slots in planes from via antipads
* [ ] Traces have sufficient width for current and allowable
      temperature rise?
* [ ] Sufficient trace spacing for voltage?
* [ ] Highest ground currents closest to supply return?
* [ ] Via size and count appropriate for current?
* [ ] Thermal vias for thermal pads?
* [ ] Tenting set appropriately for thermal vias?
* [ ] Thermal reliefs disabled for power component pads?
* [ ] Separate supply rail traces to multiple regulators?


## Sensitive analog

* [ ] Guard ring / EMI cages provided if needed
* [ ] Physically separated from high current SMPS or other noise sources
* [ ] Consider microphone effect on MLCCs if near strong sound sources

## Connectors

* [ ] TVS close to connector it is protecting circuit from?
* [ ] Programming header has clearance IDC connector mating half? They
      are much wider than the header itself.
* [ ] Inter-board connector locations checked against enclosure?
* [ ] Drivers near connectors they are driving signals on?
* [ ] Staggered power / signal connectors required? Double check if
      signals can be connected before power?

## Mechanical
* [ ] Confirm all connectors to other systems comply with the
      appropriate mechanical standard (connector orientation, key
      position, etc)
* [ ] LEDs, buttons, and other UI elements on outward-facing side of
      board
* [ ] Keep-outs around PCB perimeter, card guides, panelization
      mouse-bites, etc respected
* [ ] Stress-sensitive components (MLCC) sufficiently clear from
      V-score or mouse bite locations, and oriented to reduce bending
      stress
* [ ] Clearance around large ICs for heatsinks/fans if required
* [ ] Clearance around pluggable connectors for mating cable/connector
* [ ] Clearance around mounting holes for screws
* [ ] Plane keepouts and clearance provided for shielded connectors, magnetics, etc
* [ ] Confirm PCB dimensions and mounting hole size/placement against enclosure or card rack design
* [ ] Verify mounting hole connection/isolation
* [ ] Components not physically overlapping/colliding
* [ ] Clearance provided around solder-in test points for probe tips
* [ ] Drill holes checked? Correct hole spacing to mounting hardware?
* [ ] Drill hole plating checked?
* [ ] Adequate clearance around mounting holes for both the mounting
      hardware and the tool that fastens it?

## Thermal

* [ ] Thermal reliefs used for plane connections (unless via is used for heatsinking)
* [ ] Solid connections used to planes if heatsinking
* [ ] Ensure thermal balance on SMT chip components to minimize risk of tombstoning

## Solder paste

* [ ] No uncapped vias in pads (except low-power QFNs where some
      voiding is acceptable)
* [ ] QFN paste prints segmented
* [ ] Small pads 100% size, larger pads reduced to avoid excessive
      solder volume
* [ ] No paste apertures on card edge connectors or test points
* [ ] Paste mask correctly sized segmented on exposed DFN/QFN pads?

## Solder mask

* [ ] Confirm SMD vs NSMD pad geometry
* [ ] Adequate clearance around pads (typ. 50 um)
* [ ] Soldermask relief set appropriately given expected soldermask
      expansion?
* [ ] Soldermask minimum spoke size met?
* [ ] Soldermask relief around fiducials?
* [ ] Soldermask removed for all pads?

## Silkscreen

* [ ] Text size within fab limits
* [ ] Text not overlapping drills or component pads
* [ ] Text removed entirely in, or moved outside of, high component/via density areas
* [ ] Traceability markings (rev, date, name, etc) provided
* [ ] Silkscreen box provided for writing/sticking serial number
* [ ] Text mirrored properly on bottom layer
* [ ] Test points labeled if space permits
* [ ] Check fab silkscreen DPI? Can legend be printed clearly?
* [ ] Ticks every 10 or 25 pins for high-ish pin count ICs?
* [ ] Pin-1 indicator visible after component is placed on board?
* [ ] Power pins labeled with polarity and voltage ranges?
* [ ] Connector pinouts printed on both sides of board and mirrored?
      (if two-sided silkscreen)
* [ ] Part number, revision number, date code present?
* [ ] Serial number blank window required?
* [ ] Legend references all facing one or two directions?

## Flex specific

* [ ] Components oriented to reduce bending forces
* [ ] Teardrops on all wire-to-pad connections

## CAM production

* [ ] KiCAD specific: rerun DRC and zone fills before exporting CAM
      files to ensure proper results
* [ ] Export gerber/drill files at the same time to ensure consistency
* [ ] Visually verify final CAM files to ensure no obvious
      misalignments

## Programming and Test

* [ ] Test points on all important clock and data pins?
* [ ] More test points?
* [ ] Sure, but maybe more test points?
* [ ] Ground reference test points near all high speed signals that
      might need to be probed?
* [ ] Test points on 100-mil grid if possible? (ease of test jig
      creation)
* [ ] Unused MCU pins broken out to header or jumpers? (for debugging,
      setting test modes, etc)
* [ ] Programming/test jig can provide power to DUT? Can be powered
      from board?
* [ ] Shared data ground between test jig and DUT?
* [ ] All test points for functional testing available on test jig
      side?
* [ ] Test jig pin locations checked against final board layout?

## Radio

* [ ] PCB antenna location checked against enclosure? E.g. Is there a
      cable gland coming in above it?
* [ ] PCB antenna has strong ground reference? Most ISM band antenna
      designs are aperture antennas.
* [ ] RF tuning network easily reworkable?
* [ ] RF shielding can dimensions checked?

## Sensing

* [ ] Analog sensors close to their ADC or buffered soon?
* [ ] ADCs on or toward digital part of layout? (ADCs use fast
      oscillators)
* [ ] Feedback dividers accidentally bypassed with capacitor
      placement?

## SMPS

* [ ] Inductors sharing same axis? Can become transformers.
* [ ] Power and digital grounds separate (in terms of ground loops)?
* [ ] All power components on same side?
* [ ] Current loop area minimized? Stray inductances minimized?
* [ ] FETs and inductors close?
* [ ] Switch node ringing requires dampening?
* [ ] Electrolytics will remain cool? Electrolytics on “bottom” of
      convection volume?
* [ ] Output/bulk capacitor terminals tied as close as possible to
      low-side FET?
* [ ] Gate drive signals short and thick?
* [ ] Feedback trace thick and clear of other noisy signals? (gates
      and boost nodes)
* [ ] Minimum voltage ripple required by controller met?
* [ ] Control circuitry away from the noisy end of the switch node?
      (Buck: Vin side, Boost: Vout side)
