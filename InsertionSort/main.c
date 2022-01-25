#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1; // 0

        while(j >= 0 && arr[j] > temp)
        {
            //shifting
            arr[j + 1] = arr[j];
            j = j - 1; // -1
        }

        arr[j + 1] = temp;
    }

    printf("Sorted Array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};

    insertionSort(arr, 5);

    return 0;
}
