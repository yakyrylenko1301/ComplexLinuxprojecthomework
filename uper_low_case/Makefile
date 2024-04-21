CC = gcc  # C compiler
CFLAGS = -fPIC -Wall -Wextra -O2 -g  # C flags
LDFLAGS = -shared   # linking flags
RM = rm -f   # rm command
TARGET_LIB = libconvert.so  # target lib

all: shared_lib
	@sudo cp ./$(TARGET_LIB) /usr/lib
	@sudo chmod 0755 /usr/lib/$(TARGET_LIB)
	@sudo ldconfig

shared_lib: low.o uper.o 
	@$(CC) -shared -o $(TARGET_LIB) low.o uper.o	

low.o: low.c low_uper_case.h
	@$(CC) -fPIC -c low.c

uper.o: uper.c low_uper_case.h
	@$(CC) -fPIC -c uper.c

clean:
	@rm -rf *.so *.o
	@sudo rm /usr/lib/$(TARGET_LIB)



