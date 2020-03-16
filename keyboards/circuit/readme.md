cd to qmk_firmware directory.

Install dependencies using script in util/install_dependencies.sh

```shell
$ sudo util/<your os>_install.sh
```

To program, start keyboard in bootloader mode using BOOTMAGIC by holding down SPACE+B during boot (2-3 sec) then run the following command from the qmk_firmware top level directory (use an on-screen keyboard to press enter key for you to run this command):

```shell
$ make circuit:default:dfu
```

Make your own custom layout by duplicating the "default" folder in keyboards/circuit and modifying as necessary. Flash it to your keyboard by running:

```shell
$ make circuit:<your layout name>:dfu
```



Troubleshooting:

By default Make uses `sh` instead of `bash` for its shell commands. If you are running into strange errors, try using bash instead by calling Make like so:

```shell
$ make circuit:default SHELL=/bin/bash
```

Also, if you get an error that says "bootloader not found" or "device not found", try running the above Make command with ``sudo``.

To program using ICSP run `avrdude_prog_icsp.sh ../../circuit_default_production.hex` in 'keyboards/circuit' directory with arduino as ICSP.

Raw data (keyboard-layout-editor.com):

[{c:"#f67f00",t:"#1a1a1a",a:7},"esc",{c:"#d0ccc0",t:"#000000",a:5},"!\n1","@\n2","#\n3","$\n4","%\n5","^\n6","&\n7","*\n8","(\n9",{a:4,fa:[0,0,0,1]},")\n0\n\n/F10",{c:"#96938e"},"_\n-\n\n/F11","+\n=\n\n/F12",{a:5},"|\n\\","~\n`"],
[{c:"#60605b",t:"#d0ccc0",a:7,w:1.5},"tab",{c:"#d0ccc0",t:"#000000"},"Q","W","E","R","T","Y","U","I","O","P",{c:"#96938e",a:5},"{\n[","}\n]",{c:"#5eb1e7",t:"#1a1a1a",a:4,w:1.5},"\n\n\n/delete\n\n\n\n\n\n<i class='kb kb-Unicode-BackSpace-DeleteLeft-Big'></i>"],
[{c:"#60605b",t:"#d0ccc0",w:1.75},"\n\n\n/caps\n\n\n\n\n\nterminal",{c:"#d0ccc0",t:"#000000",a:7},"A","S","D",{n:true},"F","G","H",{n:true},"J","K","L",{c:"#96938e",a:5},":\n;","\"\n'",{c:"#60605b",t:"#d0ccc0",a:7,w:2.25},"sudo rm -rf /"],
[{w:2.25},"shift",{c:"#d0ccc0",t:"#000000"},"Z","X","C","V","B","N","M",{c:"#96938e",a:5},"<\n,",">\n.","?\n/",{c:"#60605b",t:"#d0ccc0",a:7,w:2.75},"shift"],
[{w:1.5},"ctrl","<i class='fa fa-television'></i>",{w:1.5},"alt",{c:"#d0ccc0",t:"#000000",w:6},"",{c:"#60605b",t:"#d0ccc0"},"fn",{c:"#f67f00",t:"#000000",a:4},"\n\n\n/home\n\n\n\n\n\n<i class='fa fa-chevron-left'></i>","\n\n\n/pgup\n\n\n\n\n\n<i class='fa fa-chevron-up'></i>","\n\n\n/pgdn\n\n\n\n\n\n<i class='fa fa-chevron-down'></i>","\n\n\n/end\n\n\n\n\n\n<i class='fa fa-chevron-right'></i>"]
