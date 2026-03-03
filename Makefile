TARGET = sort_app
CC = gcc
CFLAGS = -Wall

all:
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean:
	rm -f $(TARGET)
