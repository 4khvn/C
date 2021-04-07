#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=6;b>=a;b--)
		{
			printf(" ",b);
		}
		for(c=1;c<=a;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
	for(a=1;a<=5;a++)
	{
		
		for(c=0;c<=a;c++)
		{
			
			printf(" ",c);
			
		}
		for(b=5;b>=a;b--)
		{
			printf("%d ",b);
			
		}
		
		
			printf("\n");
	}
}
