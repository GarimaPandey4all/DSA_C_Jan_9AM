#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;

//    n = 10 = 1010 = 2

//    1010
//    1001 &
//    1000 = 8
//    0111 &
//    0000 = 0

    int count = 0;

    while(n > 0)
    {
        n = n & (n - 1); // 8
        count++; // 1, 2
    }

    printf("Set Bit Count is: %d", count);

    return 0;
}
