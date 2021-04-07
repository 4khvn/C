#include<stdio.h>
func(float * P)
{
	int i=0;
		if(*P>100)
	{
		i++;
	}
	if(i>0)
	{
		printf("Greater than 100.0");
	}
	else
	{
		printf("Smaller than 100.0");
	}

}
main()
{
	float arr[10];
	float * P;
	printf("Enter any number");
	scanf(" %f",arr);
	P=arr;
	func(P);
	
}
