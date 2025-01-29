CC=gcc
CFLAGS=-g -Wall -pedantic

all: html

html: html.c
	$(CC) $(CFLAGS) -o html html.c

clean:
	rm html