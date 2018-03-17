#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void match(int x){
    
    int lowMark = 0xFF;
    int matchLowOrder = !((x & 0xFF) ^ lowMark);

    int highMark = 0;
    int highByte = (x >> ((sizeof(int) -1) * 8)) & 0xFF;
    int matchHighOrder = !highByte;
    int result = matchHighOrder || matchLowOrder;
    printf("number is 0x%x; result is: %d \n", x, result);
}

int main()
{
    int allOfBitsIsOne = ~0;
    int allOfBitsIsZero = 0;
    int bitsOfLowestByteIsOne = 0x123FF;
    int bitsOfHighestByteIsZero = 0x1;
    match(allOfBitsIsOne);
    match(allOfBitsIsZero);
    match(bitsOfLowestByteIsOne);
    match(bitsOfHighestByteIsZero);
    match(INT_MIN);
    match(INT_MAX);
    match(0x1234567);
    return 0;
}