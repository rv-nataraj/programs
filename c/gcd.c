#include <stdio.h>

int gcd(int a, int b)
{
    int gcd=1;
    for(int i=1; i<=a; i++)
    {
        if ((a%i==0) && (b%i==0))
            gcd=i;
    }
    return gcd;
}

int gcdv2(int a, int b)
{
    //printf("gcd(%d, %d)\n",a,b);
    if (a==0)
        return b;
    return gcd(b%a,a);
}

int gcdv3(int a, int b)
{
    while  (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

int main(int argc, char *argv[])
{
    int a=8766;
    int b=888;
    printf("\ngcd(%d, %d) = %d",a,b,gcd(a,b));
    printf("\ngcd(%d, %d) = %d",a,b,gcdv2(a,b));
    printf("\ngcd(%d, %d) = %d\n",a,b,gcdv3(a,b));
    return 0;
}