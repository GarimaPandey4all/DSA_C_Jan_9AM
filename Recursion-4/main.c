#include <stdio.h>
#include <stdlib.h>

//1. Head Recursion: recursive call is the First statement in the function

void func(int n)
{
    if(n > 0)
    {
        func(n - 1); // recursive call
        printf("Print: %d\n", n);
    }
}

int main()
{
    func(3);

    return 0;
}
