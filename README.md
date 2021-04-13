# CPMineSnail

CPMineSnail is a Minesweeper-clone for the calculator Classpad II using the hollyhock-launcher.

## How to use.
- Download the latest file `minesweeper.hhk` from [here](https://github.com/SnailMath/CPMineSnail/releases) and place it onto the calculator. Use hollyhock-2 to start it.
- Use the touchscreen to click and move the board.
- use + and - to zoom (you can also use 1 and 2 respectively, because of German-computer-keyboard-layouts-that-I-don't-like).
- use 7, 8 and 9 to start a new game (easy, intermediate, expert)
- use `<-` to start a new game without changing the difficulty
- don't use 3, 4, 5 or 6 for other difficulty presets (I always play '3')
- Use `.`, `EXP` and `EXE` to select flag mode, question mark mode or click mode to set flags or open fields.
- You can click the top bar on the scren to change the mode as well.
- There is a bomb counter at the top, but it does not affect the game at all.
- To win, you have to open all non-bomb-fields.
- "Just a standard Minesweeper clone, you know?"

## Licence
- This minesweeper is based on my CPapp_template, which is based on the template by The6P4C, which is under the GPL Licence (as part of hollyhock).
- This program uses a RNG based on the simple_rng by Qqwy, which is under the MIT Licence. https://github.com/Qqwy/SimpleRNG/blob/master/c/simple_rng.c
- The PC vesion uses SDL2 for video, keyboard and mouse, wich is under the zlib Licence. https://www.libsdl.org/index.php

## How to compile
- install the hollyhock-2 stuff https://github.com/SnailMath/hollyhock-2
- use `git clone --recursive https://github.com/SnailMath/CPMineSnail` to clone this repo
- run `make hhk` to compile the calculator version
- install libsdl2 and run `make pc` to compile the pc version (Tested on Linux and on WSL2)
- run `make all` to make both of them.

## Info
- when you want to run the .elf version under windows using wsl2, you need to install an x-server as well, for example xming.
- download and install xming
- add `export DISPLAY=$(awk '/nameserver / {print $2; exit}' /etc/resolv.conf 2>/dev/null):0`, `export LIBGL_ALWAYS_INDIRECT=0` and `'/mnt/c/Program Files (x86)/Xming/Xming.exe' -ac -multiwindow 2> /dev/null &` to your ~/.bashrc file
- reopen your terminal (e.g. Ubuntu for windows) and execute ./_MineSnail.elf 

## Questions?
ask here: https://discord.gg/y8Mr8tDA
