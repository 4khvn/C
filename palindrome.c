#include<stdio.h>
#include<string.h>
void func(char str[ ])
{
	int i,j;
	int l=0;
	int h = strlen(str)-1 ;
	for(i=0;i<=h ;i++)
	{
		if	(str[i]==str[h-i])
		{
	    l=1;
		}
	}
		if(l)
		{
			printf("Palindrome");
		}
		else
		{
			printf("not palindrome");
		}

}

	
	

main()
{
	char str[1000];
	int i;
	printf("Enter anything");
    gets(str);
    
	
func(str);
}

