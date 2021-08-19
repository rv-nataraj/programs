
#include <stdio.h>
#include <math.h>
#include <time.h>

void primecheck_v1(int n)
{
	int flag=1;
	for(int i=2; i<n; i++)
	{
		if (n%i==0)
		{
			flag=0;
		}
	}
	if (flag) printf("\nThe number %d is prime",n);
	else printf("\nThe number %d is not prime",n);
}
void primecheck_v2(int n)
{
	if (n%2==0) 
	{
		printf("\nThe number %d is not prime",n);
		return;
	}
        int flag=1;
        for(int i=3; i<n; i=i+2)
        {
                if (n%i==0)
                {
                        flag=0;
                }
        }
        if (flag) printf("\nThe number %d is prime",n);
        else printf("\nThe number %d is not prime",n);
}
void primecheck_v3(int n)
{
	if (n%2==0) 
	{
		printf("\nThe number %d is not prime",n);
		return;
	}
        int flag=1;
        for(int i=3; i<sqrt(n); i=i+2)
        {
                if (n%i==0)
                {
                        flag=0;
                }
        }
        if (flag) printf("\nThe number %d is prime",n);
        else printf("\nThe number %d is not prime",n);
}


int main()
{
    clock_t begin,end;
    int n=1299827;

    begin=clock();
	primecheck_v1(n);
    end=clock();
    printf(" - Time Taken: %f ms",(double)(end-begin)/CLOCKS_PER_SEC);

    begin=clock();
	primecheck_v2(n);
    end=clock();
    printf(" - Time Taken: %f ms",(double)(end-begin)/CLOCKS_PER_SEC);

    begin=clock();
	primecheck_v3(n);
    end=clock();
    printf(" - Time Taken: %f ms",(double)(end-begin)/CLOCKS_PER_SEC);

	printf("\n--------------------\n");
	return 0;
}

