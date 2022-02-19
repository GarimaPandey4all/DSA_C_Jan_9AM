#include <stdio.h>
#include <stdlib.h>

//Linear Recursion

void func(int n)
{
    if(n > 0)
    {
        printf("Print First: %d\n", n);
        func(n - 1);
        printf("Print Last: %d\n", (n + 1));
    }
}

int main()
{
    func(3);

    return 0;
}
