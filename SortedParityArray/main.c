#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3, 1, 2, 4};
    int output[4];
    int t = 0;

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] % 2 == 0) // even
        {
            output[t++] = arr[i];
        }
    }

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] % 2 == 1)  // odd
        {
            output[t++] = arr[i];
        }
    }

    printf("Sorted Parity Array is: \n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d  ", output[i]);
    }

    return 0;
}
