#include<stdio.h>
main()
{
	int i, j, k, gcd;
	printf("Enter integer 1");
	scanf(" %d",&i);
	printf("Enter integer 2");
	scanf(" %d",&j);
	for(k=1; k <=i && k <=j; k++)
	{
		if(i%k==0 && j%k==0)
		  gcd=k;
		
	}
	printf("%d",gcd);
}
