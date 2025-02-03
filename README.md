# netcat-static

Statically compiled standalone netcat binary for x64 Linux. To end up with this binary, the compile instructions are as follows*:
*using latest default kali image
```
sudo apt update && sudo apt upgrade
sudo apt install musl-tools
git clone https://salsa.debian.org/debian/netcat.git
cd netcat
musl-gcc -Os -static -o netcat netcat.c \
    -include stdio.h -include stdlib.h -include unistd.h -include string.h \
    -include fcntl.h -include netdb.h -include sys/types.h -include sys/socket.h \
    -include arpa/inet.h -include time.h -include resolv.h -include getopt.h \
    -Wno-implicit-int -Wno-implicit-function-declaration -Wno-int-conversion \
    -lresolv
```
