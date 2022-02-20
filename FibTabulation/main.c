#include <stdio.h>
#include <stdlib.h>

void fib(int n)
{
    int cache[n + 1];

    cache[0] = 0;
    cache[1] = 1;

    //tabulation: iteration
    for(int i = 2; i <= n; i++)
    {
        cache[i] = cache[i - 1] + cache[i - 2];
    }

    printf("Fibonacci Series is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", cache[i]);
    }
}

int main()
{
    int n = 5;

    fib(n);

    return 0;
}
