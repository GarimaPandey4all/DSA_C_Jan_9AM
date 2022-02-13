#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 4};

    int i = 0;
    for(int j = 1; j < 9; j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
