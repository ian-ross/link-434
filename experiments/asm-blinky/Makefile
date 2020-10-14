ASMFILES=blinky.asm
OUTFILE=blinky.hex

OBJFILES=$(addprefix build/, $(patsubst %.asm, %.rel, $(ASMFILES)))

all: build build/$(OUTFILE)

build:
	@mkdir -p build

build/$(OUTFILE): $(OBJFILES)
	$(info Linking $(OUTFILE)...)
	@sdld -ni $@ $^
	@mv $(addsuffix .ihx,$(basename $@)) $@

build/%.rel: %.asm
	$(info Assembling $^...)
	@sdas8051 -los $@ $^

.PHONY: clean
clean:
	rm -fr build
