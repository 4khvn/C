#include<stdio.h>
main()
{
	int n;
	float g;
		printf("Cost of gas");
	scanf(" %f",&g);
	printf("Enter number of passengers");
	scanf(" %d",&n);

	float a = (1+g)/2;
	
	switch (n>1)
	{
		case 1:
			printf("the total cost for you is %f",a);
			break;
			case 0:
				printf("the total cost for you is %f",g);
				
	}
}

