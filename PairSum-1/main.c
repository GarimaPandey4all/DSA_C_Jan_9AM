#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 9, 6, 3, 1, 10, 4};
    int sum = 9, i, k;

    //hashtable
    int hash[20];

    for(int i = 0; i < 7; i++)
    {
        k = sum - arr[i];

        if(hash[k] == 1)
        {
            printf("Pair is: %d %d", arr[i], k);
            break;
        }

        hash[arr[i]] = 1; // 2, 9, 6,
    }

    return 0;
}
