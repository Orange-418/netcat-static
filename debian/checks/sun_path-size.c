#include <sys/un.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    struct sockaddr_un s_un;
    printf("%zu\n", sizeof(s_un.sun_path));
    return 0;
}
