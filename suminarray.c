#include<stdio.h>
main()
{
	int a[8],i,sum=0;
 printf("enter values\n");
	for(i=0;i<7;i++)
	{
	scanf(" %d ",&a[i]);
	
	sum+=a[i];
	
	
	}
	printf("Positive Elements are\n ");
	for (i=0;i<8;i++)
	{
		if(a[i]>0)
		printf("%d\n",a[i]);
	}
	printf("Negative elements are\n");
	for(i=0;i<8;i++)
	{
if(a[i]<0)
		printf("\n%d\n",a[i]);
	}
	printf("zero's are\n");
	for(i=0;i<8;i++)
	{
		if(a[i]==0)
		printf("\n%d\n",a[i]);
}

		printf("sum of  integers\n");
	
		printf("%d",sum);
	

}


