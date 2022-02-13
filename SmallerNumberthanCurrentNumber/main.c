#include <stdio.h>
#include <stdlib.h>

int main()
{
    // How many numbers smaller than the current number

    int arr[] = {8, 1, 2, 2, 3};
    int count = 0;
    int index = 0;

    int output[5];

    for(int i = 0; i < 5; i++, index++)
    {
        count = 0;
        for(int j = 0; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                count++;
            }
        }

        output[index] = count;
    }


    printf("Array is: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", output[i]);
    }

    return 0;
}
