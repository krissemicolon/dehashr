.POSIX:

CC=gcc
CFLAGS=-Wall

build: src/bruteforce.o src/threads.o src/hashing.o src/main.o
	$(CC) -DVERSION=1.0 src/bruteforce.o src/threads.o src/hashing.o src/main.o -o dehashr $(CFLAGS) -lgcrypt

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

threads.o: src/threads.c
	$(CC) $(CFLAGS) -c src/threads.c

hashing.o: src/hashing.c
	$(CC) $(CFLAGS) -c src/hashing.c

bruteforce.o: src/bruteforce.c
	$(CC) $(CFLAGS) -c src/bruteforce.c

clean:
	rm -f dehashr
	rm src/*.o

install:
	mv dehashr /usr/local/bin

uninstall:
	rm -f /usr/local/bin/dehashr

.PHONY: clean install uninstall
