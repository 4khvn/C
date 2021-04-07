#include <stdio.h>
func(int a)
{
	int long b=0;
	int c;
	if(a>0)
    {
    	c=a%10;
    	b=b*10+c;
		func(a/10);
}
else
return b;
	}
	
int main() {
    int a; 
	int long c;
    printf("Enter any number");
    scanf("%d",&a);
    c=func(a);
    printf(" %ld",c);
   
}



