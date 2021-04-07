#include<stdio.h>
void func(int m , int p , int c)
{
	if(m>=65 || p>=55 || c>=50)
	{
		printf("ADMISSION ACCEPTED");
	}
	else if(m+p+c>=180)
	{
		printf("ADMISSION ACCEPTED");
	}
	else if(m+p>=140)
	{
		printf("ADMISSION ACCEPTED");
	}
	else
	{
		printf("ADMISSION NOT ACCEPTED");
	}
	
}
main()
{
	int m,p,c;
	printf("Enter marks in Maths");
	scanf("%d",&m);
	printf("Enter marks in physics");
	scanf("%d",&p);
	printf("Enter marks in Chemistry");
	scanf("%d",&c);
	func(m,p,c);
}
