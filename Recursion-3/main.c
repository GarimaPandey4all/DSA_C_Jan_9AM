#include <stdio.h>
#include <stdlib.h>

//1. Tail Recursion: recursive call is the last statement in the function

void func(int n)
{
    if(n > 0)
    {
        printf("Print: %d\n", n);
    }

    func(n - 1); // recursive call
}

int main()
{
    func(3);

    return 0;
}
