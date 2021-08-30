#include <stdio.h>
int main()
{
    for(int row=1; row<=9; row++)
    {
        for(int col=1; col<=9; col++)
        {
	    if (row==1 || col==1 || row==9 || col==9)
            	printf("# ");
	    else
		printf("  ");
        }
        printf("\n");
    }
    return 0;
}
