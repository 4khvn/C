#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=4;b>=a;b--)
		{
			printf(" %d ",b);
		}
			for(c=0;c<=a;c++)
		{
			printf(" ",c);
		}
	
		printf("\n");
	}
}
