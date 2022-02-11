#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 9, 10};
    int sum = 9;
    int n = 7;

    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        if(arr[i]+arr[j] == sum)
        {
            printf("Pair sum is: %d %d", arr[i], arr[j]);
            break;
        }
        else if(arr[i] + arr[j] < sum)
        {
            i++;
        }
        else if(arr[i] + arr[j] > sum)
        {
            j--;
        }
    }


    return 0;
}
