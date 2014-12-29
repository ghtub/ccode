CC=gcc
CFLAGS=-I
src=temperatures.c

compile: $(src)
	gcc -o exec $(src)
