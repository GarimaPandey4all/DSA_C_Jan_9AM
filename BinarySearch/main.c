#include <stdio.h>
#include <stdlib.h>

//Binary Search:
//
//    arr[] = {3, 5, 7, 10, 13, 17, 19};
//    n = 7
//
//    search = 17, 5
//
//    first = 0
//    last = 6
//
//    middle = (first + last) / 2;
//    middle = 3
//
//    1. arr[middle] == search
//        10  == 17, false
//        17 == 17, true
//        5 == 5, true
//        break or exit(0)
//
//    2. arr[middle] > search
//        10 > 17, false
//        10 > 5, true
//
//        last = middle - 1 = 3 - 1 = 2
//
//    3. arr[middle] < search
//        10 < 17, true
//
//        first = middle + 1 = 3 + 1 = 4
//
//
//    middle = (first + last)/2; = (4 + 6)/2 = 5
//    middle = (first + last) / 2; = (0 + 2) / 2 = 1



int main()
{
    int arr[] = {3, 5, 7, 10, 13, 17, 19};
    int n = 7;
    int search;

    printf("Enter value to be search:");
    scanf("%d", &search);

    int first = 0;
    int last = n - 1;

    int middle = (first + last) / 2;

    while(first < last){

        if(arr[middle] == search)
        {
            printf("%d search value is found at location %d", search, middle + 1);
            exit(0);
        }
        else if(arr[middle] > search)
        {
            last = middle - 1;
        }
        else if(arr[middle] < search)
        {
            first = middle + 1;
        }

        middle = (first + last)/2;

    }

    if(first >= last)
    {
        printf("%d search value is not found", search);
    }

    return 0;
}
