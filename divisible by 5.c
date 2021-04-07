#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first number",&a);
	scanf("%d",&a);
	printf("enter last number",&b);
	scanf("%d",&b);
		for (c=a; c<b ;c++)
		
		{
			if(c%5==0)
		
			{
				printf("%d\n",c);
				
				
			}
			
			
			
		}
		printf("%d",c);
}
