#include <stdio.h>
#include <stdlib.h>

void NGE(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int next = -1;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d %d\n", arr[i], next);
    }
}

int main()
{
    int arr[] = {11, 13, 21, 3};

//    o/p: 13, 21, -1, -1

    int n = 4;

    NGE(arr, n);

    return 0;
}
