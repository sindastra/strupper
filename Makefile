CC ?= gcc
CCWIN ?= i686-w64-mingw32-gcc

all: strupper strlower

strupper: strupper.c
	$(CC) -std=c99 strupper.c -o strupper

strlower: strupper
	ln -s strupper strlower

strupper.exe: strupper.c
	$(CCWIN) -static -std=c99 strupper.c -o strupper.exe

strlower.exe: strupper.exe
	cp strupper.exe strlower.exe

install: strupper strlower
	install -m 0755 strupper /usr/local/bin/strupper
	install -m 0755 strlower /usr/local/bin/strlower

uninstall:
	rm -f /usr/local/bin/strupper
	rm -f /usr/local/bin/strlower
