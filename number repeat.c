#include<stdio.h>
main()
{
	int i,a,b;
	static int count= 0;
	int af=0;
	printf("Enter any number");
	scanf("%d",&a);
	printf("Enter number of find");
	scanf("%d",&b);
	system("cLS");
	while(a>0)
	{
	
	af=a%10;
	if(af==b)
	{
		count++;
	}
	a=a/10;
}
	printf("number is %d times repeated",count);
}
	
