#include <stdio.h>
#include <stdlib.h>

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    unsigned filter = ~(0xFF << i * 8);
    unsigned replace = (unsigned) b << i * 8;
    return (x & filter) | replace;
}

int main()
{
    unsigned x = 0x12345678;
    printf("replace %x by %x in %d \n%x \n", x, 0xAB, 2, replace_byte(x, 2, 0xAB));
    printf("replace %x by %x in %d \n%x \n", x, 0xAB, 0, replace_byte(x, 0, 0xAB));
}