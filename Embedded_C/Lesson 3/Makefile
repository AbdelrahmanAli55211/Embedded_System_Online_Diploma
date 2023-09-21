#@copyright:Abdelrahman Ali
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
project-name=Toggle_Led
all: $(project-name).bin
	@echo "build is done!"
%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@
$(project-name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker-script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
$(project-name).bin: $(project-name).elf
	$(CC)objcopy.exe -O binary $< $@
clean-all:
	rm *.o *.elf *.bin
	@echo "Everything is clean"
clean:
	rm *.elf *.bin
	@echo "Deleted the .bin & .elf files"
