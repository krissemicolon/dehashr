.POSIX:

include $(CONFIG_MK)

OBJECTS = bruteforce.o hashing.o threads.o main.o

all: dehashr

.c.o:
	$(CC) $(MYCFLAGS) $(INC) -c $<

dehashr: $(OBJECTS)
	$(CC) $(OBJECTS) -o dehashr $(MYLDFLAGS)

clean:
	rm -f dehashr $(OBJECTS)

.PHONY: all clean
