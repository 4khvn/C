#include<stdio.h>
main()
{
	char a;
	int sum=0;
	for (; ;)
	{
		printf("Enter any character_",&a);
		scanf(" %c",&a);
		sum=sum+1;
		if(a=='z')
		break;
	}
	printf("number of characters = %d",sum);
}
