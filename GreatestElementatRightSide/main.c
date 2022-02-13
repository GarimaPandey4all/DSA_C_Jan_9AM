#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Replace elements with greatest element on right side

    int arr[] = {17, 18, 5, 4, 6, 1};
//    output: {18, 6, 6, 6, 1, -1};
    int n = 6;
    int max = arr[n - 1];
    arr[n - 1] = -1;

    for(int i = n - 2; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = max; // 1

        if(temp > max)
        {
            max = temp;
        }
    }

    printf("Array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
