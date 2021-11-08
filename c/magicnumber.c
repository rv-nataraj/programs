#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n)
{
    int sum=0;
    // code block A
    int temp=n;
    while(temp>0)
    {
        sum=sum+temp%10;
        temp=temp/10;
    }
    printf(" %d",sum);
    return sum;
}

int reverse(int n)
{
    int r=0;
    // code block B
    int temp=n;
    while(temp>0){
        r=r*10+(temp%10);
        temp=temp/10;
    }
    printf(" %d",r);
    return r;
}

int main(int argc, char* argv[])
{
    int a=atoi(argv[1]);
    if (sum_of_digits(a)*reverse(sum_of_digits(a))==a)
    {
        printf("The given input is magic number");
    }
    else {
        printf("The given number is not a magic number");
    }
    printf("%d",a);
    return 0;
}