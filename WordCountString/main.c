#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20] = "How are you I am Fine";
    int word = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            word++;
        }
    }

    printf("Word count of the String is: %d", word+1);

    return 0;
}
