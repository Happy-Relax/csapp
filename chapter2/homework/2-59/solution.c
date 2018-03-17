#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int32_t x = 0x89ABCDEF;
    int32_t y = 0x76543210;
    printf("%x \n", (x & 0x000000FF) | (y & 0xFFFFFF00));
    return 0;
}