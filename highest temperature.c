#include<stdio.h>
main()
{
	int a[7],i,d,largest;
	printf("enter number of days");
	scanf("%d",&d);
	
	printf("Enter temperature of 7 days");
	for(i=0;i<d;i++)
	{
		scanf("%d",&a[i]);
	}
	largest = a[0];
	for(i=1;i<d;i++)
	{
		if(largest<a[i])
		largest=a[i];
			
	}
printf("largest number = %d",largest);
	
}
