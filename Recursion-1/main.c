#include <stdio.h>
#include <stdlib.h>

//Recursion: Function calls itself is called recursion or recursive call.
//
//Recursion

int factorial(int n)
{
    //base case or stop condition
    if(n == 0)
    {
        return 1;
    }
    else {
//                  (1)
//            1 * fac(0) = 1
//            2 * fac(1) = 2
//            3 * fac(2) = 6
//            4 * fac(3) = 24
//            5 * fac(4) = 120

        //Small Problem: factorial(n - 1)
        //Processing Logic
        return n * factorial(n - 1);// factorial(n - 1) - recursive call
    }
}

//Iteration

//int factorial(int n)
//{
//    int i, fact = 1;
//    for(i = 1; i <= n; i++)
//    {
//        fact *= i;
//    }
//
//    printf("Factorial is: %d", fact);
//
//    return fact;
//}

//what is call stack?
//
//- A call stack is a stack data structure that is used to trace the sequence of the function call.
//
//fac(0) = 1
//fac(1)
//fac(2)
//fac(3)
//fac(4)
//fac(5)
//main()

//void recurse()
//{
//    recurse(); // recursive call
//}


int main()
{
    int result = factorial(5); // function call
    printf("%d ", result);

    return 0;
}
