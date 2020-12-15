CC=gcc
CFLAGS=-march=native -O3 -flto -fno-fat-lto-objects -pipe
OBJECTS=main.o

output: src/main.o src/threads.c src/hashing.o
	$(CC) src/main.o src/hashing.o -o dehashr $(CFLAGS)

main.o: src/main.c
	$(CC) -c src/main.c $(CFLAGS)

threads.o: src/threads.c
	$(CC) -c src/threads.c $(CFLAGS)

hashing.o: src/hashing.c
	$(CC) -c src/hashing.c $(CFLAGS)

clean:
	rm -f dehashr
	rm src/*.o

install:
	mv dehashr /usr/bin

uninstall:
	rm -f /usr/bin/dehashr

target: dependencies
