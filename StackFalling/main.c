#include <stdio.h>
#include <stdlib.h>

void func(int n)
{
    if(n == 0)
    {
        return;
    }
    func(n - 1);
    printf("%d  ", n);
}

int main()
{
    func(5);

    return 0;
}
