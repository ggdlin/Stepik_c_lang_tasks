CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror
TARGET = myprogram

###targets###
all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)

rebuild: clean all

.PHONY: all clean rebuild
