avrdude -c usbasp -p atmega328p -U flash:w:optiboot_atmega328_pro_8MHz.hex -U lfuse:w:0xe2:m -U hfuse:w:0xde:m -U efuse:w:0x6:m
pause