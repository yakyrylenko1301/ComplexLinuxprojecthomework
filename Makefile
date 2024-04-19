# This is a comment line
CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS= -c -Wall

all: prog

prog: main.o calc.o
	@$(CC) main.o calc.o -o main -lm

main.o: main.o
	@$(CC) $(CFLAGS) main.c

calc.o: calc.c calc.h
	@$(CC) $(CFLAGS) calc.c

clean:
	@rm -rf *.o main