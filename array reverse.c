#include<stdio.h>
#include<string.h>
func(char a[100],int i)
{
	int j=strlen(a);
	char temp;
	if(j/2==i)
	{
		return;
	}
		temp=a[i];
		a[i]=a[j-1-i];
		a[j-1-i]=temp;
		func(a,i+1);
		return;
}

main()
{
	char a[100];
	int i=0;
	printf("enter any string");
	gets(a);
	func(a,i);
	printf("reverse string is %s",a);
}
