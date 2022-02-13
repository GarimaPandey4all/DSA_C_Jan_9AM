#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 3;
    int matrix[3][3] = {{1, 2, 3},
                      {5, 6, 7},
                      {9, 10, 11}};

    for(int i = 0; i < N; i++)
    {
        for(int j = N - 1; j >= 0; j--)
        {
            printf("%d  ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
