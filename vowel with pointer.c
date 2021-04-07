#include<stdio.h>
#include<string.h>
func(char *p , int i, int j)
{
	int count=0;
	char c;
	while(i>j)
	{
		c = *(p+j);
		if(c=='A' || c=='a' || c=='e' || c=='E' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u')
		{
			count ++;
		}
		j++;
	}
	printf("%d",count);
}


main()
{
	int i;
	char a[100];
	char * p;
	char ** p1;
	printf("Enter anything");
    gets(a);
    i=strlen(a);
	p=a;
	p1=&p;
	func(*p1,i,0);
	
	

	
}
