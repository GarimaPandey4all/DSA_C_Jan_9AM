#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "GarIma";

//    for(int i = 0; name[i] != '\0'; i++)
//    {
//        name[i] = name[i] | ' '; // lowercase
//    }
//
//    printf("%s\n", name);
//
//    for(int i = 0; name[i] != '\0'; i++)
//    {
//        name[i] = name[i] & '_'; // uppercase
//    }
//
//    printf("%s\n", name);

    for(int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] ^ ' '; // uppercase
    }

    printf("%s\n", name);


    return 0;
}
