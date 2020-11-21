# Programming

## JLink + C2

Use `efmjlink` script, passing it Intel hex file:

``` bash
#!/bin/bash
f=$1
jlink <<EOF
connect

c2

loadfile ${f}
r
q
EOF
```

This just runs the JLink Commander program, connects to the device
with the C2 protocol and downloads the given hex file.

NOTE: I had an `erase` command in there to start with, which screws
things up because it erases the bootloader! So don't do that. If you
do that, you can restore the bootloader by flashing it from the files
in the AN945SW example code.


## Starting the USB bootloader

On the Thunderboard, there's no way to pull P2.0 down on POR, which
means you need to start the bootloader from software, which means that
this all needs to start with something programmed onto the board that
supports that. The `asm-blinky-boot` example does that -- pressing
`BTN0` starts the bootloader by doing:

```
  SWRSF = 1 << 4

  mov r0, #0xA5
  mov RSTSRC, #SWRSF
```


## USB hex file download

Use `efm8boot` Python utility. Seems to work!

The `efm8load.py` script supplied by Silicon Labs needs an
intermediate step to convert Intel hex files to a "boot record"
format. The `efm8boot` script just reads Intel hex files directly.

Issues with `efm8boot`:

 - If a segment in the hex file doesn't cover a whole flash page on
   the EFM8UB3, then `efm8boot` won't erase the flash page. That will
   cause problems with trying to overwrite/modify flash locations,
   rather than erasing and rewriting them. (This might really be a
   problem: the warning came from a hex file that had the main entry
   point at 0x0100, in a hex file segment starting at that address,
   but the flash page containing this address had already been erased
   when writing code starting at 0x0000.)
