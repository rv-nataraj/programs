#include <stdio.h>

int main()
{
    	int a;
    	printf("\nEnter a number: ");
    	while (scanf("%d", &a) != 1)
    	{
       	 	// the entered input is not a number
                // prompt user again
		scanf("%*[^\n]");
        	printf("Enter a number: ");
    	}
    	printf("You entered %d.\n", a);
	return 0;
}
