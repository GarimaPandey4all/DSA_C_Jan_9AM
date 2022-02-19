#include <stdio.h>
#include <stdlib.h>

//Types of recursion
//
//1. Tail Recursion
//2. Head Recursion
//3. Linear Recursion
//4. Tree Recursion
//5. Indirect Recursion
//6. Nested Recursion


//4 - O(1) T.C
//
//4n - O(n) T.C

int func(int a)
{
    int sum;

    if(a == 1) // base case or terminate case
    {
        return a;
    }

    //(a + func(a - 1)) - Small Problem
    sum = a + func(a - 1); // Processing Logic

    return sum;

}

int main()
{
    int x;

    //Sum of Digits

    x = func(3); // 3 = 1 + 2 + 3 = 6

    printf("%d", x);

    return 0;
}
