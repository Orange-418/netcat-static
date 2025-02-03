# netcat-static

All files, besides compiled binary, are pulled from the official repository https://salsa.debian.org/debian/netcat-openbsd

Statically compiled standalone netcat binary for x64 Linux. To end up with this binary, the compile instructions are as follows*:

*using latest default kali image
```
sudo apt update && sudo apt upgrade
#Compile without libssl. From my research, Kali nc is also compiled without. Purge libssl, then compile, ignoring unsatisfied dependencies. Avoids modifying source code.
sudo apt-get remove --purge libssl-dev
sudo apt-get install build-essential dpkg-dev devscripts git pkg-config
git clone https://salsa.debian.org/debian/netcat-openbsd.git
cd netcat-openbsd
dpkg-buildpackage -us -uc -b -d
```

Sha-256 Hash of binary: 8556D1ECBE4BA296C84A561E21878A085755B01C017D5E48EF86492B4AA532FD
