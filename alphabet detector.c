#include<stdio.h>
main()
{
	char a;
	printf("enter any character",&a);
	scanf("%c",&a);
	if (a>='a' && a<='z' || a>='A' && a<='A')
	{
		printf("Alphabet");
	}
	else
	{
		printf("not alphabet");
		
	}
}
