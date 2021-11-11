#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* text="hello";
    printf("%s",text);
    printf("%c",text[1]);
    //text[1]='h';
    text="h";
    printf("\n%s",text);
    return 0;
}