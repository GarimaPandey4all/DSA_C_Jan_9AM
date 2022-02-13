#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 3, 4};
    int sum = 0;

    int x = 0, y = 0;

    for(int i = 0; i < 3; i++)
    {
        x ^= arr[i];
    }

    for(int i = 1; i <= 4; i++)
    {
        y ^= i;
    }

    printf("Missing Number is: %d", (x ^ y));

//    for(int i = 0; i < 3; i++)
//    {
//        sum += arr[i];
//    }
//
//    printf("Sum is: %d\n", sum);
//
//    int n = 4;
//
//    int totalSum = (n * (n + 1))/2; // overflow
//
//    printf("Total sum is: %d\n", totalSum);
//
//    printf("Missing number is: %d", (totalSum - sum));

    return 0;
}
