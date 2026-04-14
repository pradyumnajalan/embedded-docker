CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -O2

all:
	@$(CC) $(CFLAGS) -c -o firmware.o main.c

clean:
	rm -f firmware.o