#include <stdio.h>
#include <stdlib.h>

//Searching
//
//1. Linear Search:
//
//    arr[] = {23, 45, 67, 89, 120, 245};
//    search = 120
//
//
//2. Binary Search:


int main()
{
    int arr[] = {23, 45, 67, 89, 120, 245};
    int search;

    printf("enter value to be search:");
    scanf("%d", &search);

    int i;

    for(i = 0; i < 6; i++)
    {
        if(search == arr[i])
        {
            printf("%d search value is found at location %d", search, i+1);
            //break; // exit the loop
            exit(0); // exit the program
        }
    }

    if(i == 6)
    {
        printf("%d search value is not found", search);
    }

    return 0;
}
