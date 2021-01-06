CC=gcc
CFLAGS=-march=native -O3 -flto -fno-fat-lto-objects -pipe -lgcrypt

compile: src/main.o src/threads.o src/hashing.o
	$(CC) src/threads.o src/hashing.o src/main.o -o dehashr $(CFLAGS)

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

threads.o: src/threads.c
	$(CC) $(CFLAGS) -c src/threads.c 

hashing.o: src/hashing.c
	$(CC) $(CFLAGS) -c src/hashing.c -lgcrypt 

clean:
	rm -f dehashr
	rm src/*.o

install:
	mv dehashr /usr/bin

uninstall:
	rm -f /usr/bin/dehashr

