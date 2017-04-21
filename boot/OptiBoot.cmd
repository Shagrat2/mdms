avrdude -c usbasp -p atmega328p -U flash:w:optiboot_atmega328_pro_8MHz.hex -U lfuse:w:0xE2:m -U hfuse:w:0xDE:m -U efuse:w:0x06:m
pause