#include <stdio.h>
#include <stdlib.h>

int main()
{
//    LE: 17, 5, 2
//
//    1. Brute Force Approach: Left to Right
//    2. Scan Array from Right: Right to Left

    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    int max = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] > max)
        {
            printf("Leader Element is: %d\n", arr[i]);
            max = arr[i];
        }
    }

//    for(int i = 0; i < n; i++)
//    {
//        int j;
//        for(j = i + 1; j < n; j++)
//        {
//            if(arr[i] < arr[j])
//            {
//                break;
//            }
//        }
//
//        if(j == n)
//        {
//            printf("Leader Element is: %d\n", arr[i]);
//        }
//    }

    return 0;
}
