# This is a comment line
CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS= -c -Wall
SUBDIRS = ./calc_lib projectY

all: prog

make_shared_lib:
	cd uper_low_case; pwd; make
	cd ../; pwd

make_calc_lib:
	cd calc_lib; pwd; make
	cd ../; pwd

prog: make_shared_lib make_calc_lib main.c
	$(CC) main.c  -L . -lconvert  -L ./calc_lib -l calc -lm  -o main

clean_shared_lib:
	cd uper_low_case; pwd; make clean
	cd ../; pwd

clean_calc_lib:
	cd calc_lib; pwd; make clean
	cd ../; pwd

clean: clean_shared_lib clean_calc_lib
	@rm -rf *.o main
