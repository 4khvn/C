#include<stdio.h>
void Print(int a)
{
	int i,j,k;
	for(i=1;i<=a;i++)
	{
		for(j=a;j>=i;j--)
		{
			printf(" ");
		}
		
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
		for(i=1;i<=a;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=a-1;k>=i;k--)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
}
main()
{
	int a;
	printf("Enter number of staric shape");
	scanf("%d",&a);
	system("CLS");
	Print(a);
	
}
