# AnubisOS
me casualy trying to write my own operating system
## First Look
![screenshot](https://github.com/Plep-m/AnubisOS/blob/main/preview/First_screen_anubisOs.PNG)
## todo
 - [x] long_mode support
 - [ ] protected-mode
 - [x] 64 bits
 - [x] print with c++
 - [ ] GDT
 - [ ] IDT
 - [ ] disk managment
 - [ ] keyboard managment
 - [ ] terminal app with a fancy motd

## run
git clone into linux with binutils 3.37 and gcc 11.2 installed <br>
also need nasm xorriso grub-pc-bin et grub-common
make build-x86-64

use qemu on windows  qemu-system-x86_64 -cdrom .\kernel.iso
