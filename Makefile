.POSIX:

include config.mk

all: options dehashr

options:
	@echo Dehashr build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

dehashr:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="-I '`pwd`'" all
	cp src/dehashr dehashr

clean:
	rm -f dehashr
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="-I '`pwd`'" clean

.PHONY: all options dehashr clean
