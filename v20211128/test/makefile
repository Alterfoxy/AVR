all:
	avr-as main.asm -o main.o
	avr-ld main.o -o main.elf
	avr-objcopy -j .text -j .data -O binary main.elf main.bin
	php ../export.php test/main.bin tb.hex