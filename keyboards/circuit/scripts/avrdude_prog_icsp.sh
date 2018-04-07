# use this to flash using arduino as ICSP programmer
# pass in hex file as first arg

# pinout
# Arduino         Target
# D10 (SS)        Reset
# D11 (MOSI)      MOSI
# D12 (MISO)      MISO
# D13 (SCK)       SCK

avrdude -C/etc/avrdude.conf -v -patmega32u4 -cstk500v1 -P/dev/ttyACM0 -b19200 -Uflash:w:$1:i