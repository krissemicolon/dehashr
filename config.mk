# program info
VERSION = 1.0

# customize to fit system
PKG_CONFIG = pkg-config

# paths
PREFIX = /usr/local

# includes (global)
INCS = `$(PKG_CONFIG) --cflags libgcrypt`
LIBS = `$(PKG_CONFIG) --libs libgcrypt`

# flags
MYCPPFLAGS = -DVERSION=\"$(VERSION)\"
MYCFLAGS = -std=c99 -Wall -Wextra -pedantic \
           $(INCS) $(MYCPPFLAGS) $(CPPFLAGS) $(CFLAGS)
MYLDFLAGS = $(LIBS) $(LDFLAGS)
