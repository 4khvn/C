#include<stdio.h>
func(int arr[4][4])
{
	static int i=0 , j=0;

		if (arr[i][j]==1)
		{
			printf("\n%d row and %d column\n",i,j);
			i++;
			if(arr[i][j]==0)
			{
				j++;
				i--;
			}
			if(i>3)
			{
				return;
			}
			func(arr);
		}
		else
		{
			j++;
			func(arr);
			
		}
	
}

main()
{
	int arr[4][4];
	int i,j;
	printf("Populate array with 1's and 0's'\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	system("CLS");
		for(i=0;i<=3;i++)
	{
		printf("\n");
		for(j=0;j<=3;j++)
		{
			printf(" %d ",arr[i][j]);
		}
	}
	
	func(arr);
	
	
}
