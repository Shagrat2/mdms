avrdude -c usbasp -p atmega328p -U flash:w:MYSBootloaderV13pre.hex -U lfuse:w:0xE2:m -U hfuse:w:0xD2:m -U efuse:w:0x6:m
pause