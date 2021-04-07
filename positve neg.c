#include<stdio.h>
main()
{
	int a;
	printf("enter your number",&a);
	scanf("%d",&a);
	switch (a>0)
	{
		case 1 :
			printf("Number is positive");
			break;
			case 0   :
				
				switch (a<0)
			
				{
					case 1:
						printf("number is negative");
						break;
						case 0 :
							printf("number is zero");
					
				}
				
				
			
				
	}
	
}
