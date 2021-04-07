#include<stdio.h>
main()
{
	
	char k[6]={'a','A','B','C','D','E'};
	int i,j,l;
	
	for(i=1;i<=5;i++)
	{
		for(l=4;l>=i;l--)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("%c ",k[j]);
		}
		printf("\n");
	}
}
