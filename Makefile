CC=gcc
CFLAGS=-O3 -pipe

make:
	$(CC) src/main.c -o dehashr $(CFLAGS)

clean:
	rm -f dehashr

install:
	cp -f dehashr /usr/bin
	chmod +x /usr/bin/dehashr

uninstall:
	rm -f /usr/bin/dehashr
