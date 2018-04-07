#sudo /opt/miniconda3/bin/python ./pyreset.py /dev/ttyACM1
# what we want
#avrdude -C/etc/avrdude.conf -v -patmega32u4 -cstk500v1 -P/dev/ttyACM0 -b19200 -e -Ulock:w:0xFF:m -Uefuse:w:0xF7:m -Uhfuse:w:0xD9:m -Ulfuse:w:0x7F:m
# arduino
#avrdude -C/etc/avrdude.conf -v -patmega32u4 -cstk500v1 -P/dev/ttyACM0 -b19200 -e -Ulock:w:0x3F:m -Uefuse:w:0xcb:m -Uhfuse:w:0xd8:m -Ulfuse:w:0xff:m