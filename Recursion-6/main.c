#include <stdio.h>
#include <stdlib.h>

//Tree Recursion
//
//        2
//    1           1
//  0      0   0    0

void func(int n)
{
    if(n > 0)
    {
        printf("%d\n", n);
        func(n - 1);
        func(n - 1);
    }
}

int main()
{
    func(2);

    return 0;
}
