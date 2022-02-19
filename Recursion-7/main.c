#include <stdio.h>
#include <stdlib.h>

//Indirect Recursion: more than one function, they are calling one another in a circular fashion

void funcB(int n)
{
    if(n > 1)
    {
        printf("%d\n", n);
        funcA(n/2);
    }
}

void funcA(int n)
{
    if(n > 0)
    {
        printf("%d\n", n);
        funcB(n - 1);
    }
}

int main()
{
    funcA(10);

//    10 9 4 3 1

    return 0;
}
