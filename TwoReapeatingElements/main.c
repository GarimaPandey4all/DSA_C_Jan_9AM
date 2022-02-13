#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 4, 3, 1, 2, 5, 4};
//    output: 2, 4

    for(int i = 0; i < 7; i++)
    {
        for(int j = i + 1; j < 7; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d  ", arr[i]);
            }
        }
    }

    return 0;
}
