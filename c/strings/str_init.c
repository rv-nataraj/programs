#include <stdio.h>
int main()
{
    char str1[]="hello";
    char str2[50]="hello";
    char str3[]={'h','e','l','l','o','\0'};
    char str4[6]={'h','e','l','l','o','\0'};
    printf("%s\n%s\n%s\n%s",str1,str2,str3,str4);
    return 0;
}