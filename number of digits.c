#include<stdio.h>
main()
{
	int a,b,count =0;
	printf("Enter digit");
	scanf("%d",&a);
	system("CLS");
	while(a>0)
	{
		a=a/10;
		count++;
		
	}
	printf("There are %d digits in this number",count);
}
