#include <stdio.h>

char *_strncpy(char *dest, const char *src, int n) {
    char *dest_start = dest;

    while (n > 0 && *src != '\0') {
        *dest++ = *src++;
        n--;
    }

    while (n > 0) {
        *dest++ = '\0';
        n--;
    }

    return dest_start;
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    _strncpy(destination, source, 12);

    printf("Copied String: %s\n", destination);

    return 0;
}

