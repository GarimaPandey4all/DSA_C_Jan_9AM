#include <stdio.h>
#include <stdlib.h>

void TOH(int n, int A, int B, int C)
{
    if(n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("(%d, %d)", A, C);
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    int disks = 3;

    TOH(disks, 1, 2, 3);

    return 0;
}
