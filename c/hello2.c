#include <stdio.h>

int main(int cac, char* cav[])
{
    printf("Hello, %s\n", cav[1]);
    printf("Hello, %s\n",cav[2]);

    for(int i=0; i<cac; i++)
    {
        printf("Hello, %s\n",cav[i]);
    }
    return 0;
}