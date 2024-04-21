# This is a comment line
CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS= -c -Wall

TARGET_LIB=libcalc.a

all: static_lib

static_lib: calc.o
	ar -src $(TARGET_LIB) *.o
	ranlib $(TARGET_LIB)


calc.o: calc.c calc.h
	$(CC) $(CFLAGS) *.c 

clean:
	rm -rf *.o
	rm -rf $(TARGET_LIB)



