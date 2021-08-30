#include <stdio.h>

int fib_v1(int n)
{
	if (n<=1) return 1;
	return fib_v1(n-1)+fib_v1(n-2);
}

int fib_v2(int n)
{
	int fib[n+2];
	fib[0]=1;
	fib[1]=1;
	for (int i=2; i<=n; i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	return fib[n];
}

int fib_v3(int n)
{
    int a=0, b=1,c=1;
    for (int i=0; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}



int main()
{
	int n=13;
	printf("\nThe %d fibbonacci number is %d\n",n,fib_v1(n));
	printf("\nThe %d fibbonacci number is %d\n",n,fib_v2(n));
    printf("\nThe %d fibbonacci number is %d\n",n,fib_v3(n));
	return 0;
}
