#include <stdio.h>
#include <stdlib.h>

//stack building: sequence in reverse order

void func(int n)
{
    if(n == 0)
    {
        return;
    }

    printf("%d  ", n);
    func(n - 1);
}

int main()
{
    func(5);

    return 0;
}
