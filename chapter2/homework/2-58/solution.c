#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *byte_pointer;

int main()
{
    int32_t one = 1;
    int32_t zero = 0;
    byte_pointer bytesForOne = (byte_pointer) &one;
    byte_pointer bytesForZero = (byte_pointer) &zero;
    int result = bytesForOne[0] == bytesForZero[1] ? 0 : 1;
    printf("the result is: ");
    printf("%d \n", result);
    return result;
}

