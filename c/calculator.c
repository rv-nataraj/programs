#include <stdio.h>

float x,y;
void getinputs()
{
    printf("\nEnter x? "); scanf("%f",&x);
    printf("\nEnter y? "); scanf("%f",&y);
}

float add()
{
    return x+y;
}


int main()
{
	int choice=0;
    float result;
    
	do
	{
        printf("\n0 - Get input values");
		printf("\n1 - Addition");
		printf("\n2 - Subtraction");
		printf("\n3 - Multiplication");
		printf("\n4 - Division");
		printf("\n5 - Exit");
		printf("\n\nEnter your choice?");
		scanf("%d",&choice);
		switch(choice)
		{
            case 0:
                printf("\n----Get Inputs----");
                getinputs();
                break;
			case 1:
				printf("\n----Addition----");
                result=add();
                printf("\nThe result of adding %f and %f is %f",x,y,result);
				break;
			case 2:
				printf("\n----Subtraction----");
				break;
			case 3:
				printf("\n----Multiplication----");
				break;
			case 4:
				printf("\n----Dvision----");
				break;
			default:
				printf("\nEnter choice between 1 and 5");
		}
	}while (choice!=5);
	return 0;
}