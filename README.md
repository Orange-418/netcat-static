# netcat-static

All files, besides compiled binary, are pulled from official Kali/Debian Repositories

Statically compiled standalone netcat binary for x64 Linux. To end up with this binary, the compile instructions are as follows*:

*using latest default kali image
```
uncomment/add this line to /etc/apt/sources.list: deb-src http://http.kali.org/kali kali-rolling main contrib non-free non-free-firmware
sudo apt update && sudo apt upgrade
sudo apt-get build-dep netcat-openbsd libc6-dev
apt-get source netcat-openbsd
cd netcat-openbsd-1.228
export DEB_CFLAGS_MAINT_APPEND="-static"
export DEB_LDFLAGS_MAINT_APPEND="-static"
export DEB_BUILD_OPTIONS="nocheck"
dpkg-buildpackage -us -uc -b
```

Sha-256 Hash of binary: 8556D1ECBE4BA296C84A561E21878A085755B01C017D5E48EF86492B4AA532FD
