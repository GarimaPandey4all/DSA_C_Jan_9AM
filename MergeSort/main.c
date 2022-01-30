#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int n)
{
    int temp[n];

    for(int size = 1; size < n; size = size * 2)
    {
        int l1 = 0;
        int k = 0; // index for temp array

        while(l1 + size < n)// 4 + 1 < 5
        {
            int h1 = l1 + size - 1;  // 0, 2
            int l2 = h1 + 1; // 1, 3
            int h2 = l2 + size - 1; // 1, 3

            if(h2 >= n)
            {
                h2 = n - 1;
            }

            //Merge two pairs

            int i = l1; // 0, 2
            int j = l2; // 1, 3

//            arr:14, 19, 25, 20, 22
//            temp: 14, 19, 20, 25,

            while(i <= h1 && j <= h2)
            {
                if(arr[i] <= arr[j])
                {
                    temp[k++] = arr[i++];
                }
                else {
                    temp[k++] = arr[j++];
                }
            }

            while(i <= h1)
            {
                temp[k++] = arr[i++];
            }

            while(j <= h2)
            {
                temp[k++] = arr[j++];
            }

            //merge completed

            l1 = h2 + 1;// 2, 4
        }

        //any pair left
        for(int i = l1; i < n; i++)
        {
            temp[k++] = arr[i];
        }

        for(int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }

        printf("\nSize of %d elements are: \n", size);
        for(int i = 0; i < n; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {14, 19, 25, 20, 22};

    mergeSort(arr, 5);

    return 0;
}
