CC ?= gcc

all: strupper strlower

strupper: strupper.c
	$(CC) -std=c99 strupper.c -o strupper

strlower: strupper
	ln -s strupper strlower

install: strupper strlower
	install -m 0755 strupper /usr/local/bin/strupper
	install -m 0755 strlower /usr/local/bin/strlower

uninstall:
	rm -f /usr/local/bin/strupper
	rm -f /usr/local/bin/strlower
