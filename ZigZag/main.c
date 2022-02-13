#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 5, 7, 9, 10, 4};

//    a > b < c > d <

    int temp = 0;

    int flag = 0;

    for(int i = 0; i < 6; i++)
    {
        if(flag)
        {
            if(arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        else
        {
            if(arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        flag = !flag;
    }


    printf("Zig Zag Array is: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
