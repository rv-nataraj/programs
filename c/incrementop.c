#include <stdio.h>
int main()
{
	int i=0;
	printf("\n%d=>%d",i++ + ++i,i);
	i=0;
	printf("\n%d=>%d",i++ + i++,i);
	i=0;
	printf("\n%d=>%d\n",++i + i++,i);
	return 0;
}
