#!/bin/bash
nasm -f elf64 lib.asm -o SO_ASM.o
ld -shared SO_ASM.o -o SO_ASM.so
