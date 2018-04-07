- to program using ICSP run avrdude_prog_icsp.sh with arduino as ICSP
- to program after uploading QMK firmware, start in bootloader mode using BOOTMAGIC by holding down SPACE+B during boot (2-3 sec) then run
	make circuit:default:dfu