# use this to flash using arduino as ICSP programmer
# pass in hex file as first arg

# pinout
# Arduino         Target
# D10 (SS)        Reset
# D11 (MOSI)      MOSI (pin 10)
# D12 (MISO)      MISO (pin 11)
# D13 (SCK)       SCK  (pin 9)

avrdude -C/etc/avrdude.conf -v -patmega32u4 -cstk500v1 -P/dev/ttyACM0 -b19200 -Uflash:w:$1:i