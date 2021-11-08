#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    //char* text="hello";

    //char text[]="hello";

    //char *text=malloc(6);
    //text[0]='h';text[1]='e';text[2]='l';text[3]='l';text[4]='o';text[5]='\0';
    
    char *text=malloc(6);
    //printf("--%p",text);
    text="hello";
    //printf("\n%p",text);

    //char *text=malloc(6);
    //printf("--%p",text);
    //strcpy(text,"hello");
    //printf("\n%p",text);

    printf("%s",text);
    printf("%c",text[1]);
    //text[1]='2';
    printf("\n%s",text);
    return 0;
}