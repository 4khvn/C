#include<stdio.h>
main()
{
	int a,sum=0;
	for (; ;)
	{
	
	printf("Enter any number",&a);
	scanf("%d",&a);
	sum=sum+a;
	if (a<200 || a>400)
	break;
}
printf("%d",sum);

	
}
