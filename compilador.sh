#!/bin/sh
gcc -c main.c -o main.o
gcc -c fila.c -o fila.o
gcc main.o fila.o -o executavel
exit
