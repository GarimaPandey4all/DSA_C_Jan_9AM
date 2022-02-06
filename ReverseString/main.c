#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[9] = "Ram Kumar";
    int n = 9;

    //two pointer approach

    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;

        i++;
        j--;
    }

    printf("Reverse String is: %s", name);

//    for(int i = n - 1; i >= 0; i--)
//    {
//        printf("%c", name[i]);
//    }

    return 0;
}
