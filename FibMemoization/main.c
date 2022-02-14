#include <stdio.h>
#include <stdlib.h>

int fib(int n, int cache[])
{
    //base case
    if(n == 0 || n == 1)
    {
        return n;
    }

    //memoization
    if(cache[n] != 0)
    {
        return cache[n];
    }

    int first = fib(n - 1, cache);
    int second = fib(n - 2, cache);

    int sum = first + second;

    cache[n] = sum;

    return cache[n];
}

int main()
{
    int n = 5;

    int cache[n + 1];

    for(int i = 0; i < n; i++)
    {
        cache[i] = 0;
    }

    fib(n, cache);

    printf("Fibonacci Series:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", cache[i]);
    }

    return 0;
}
