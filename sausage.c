#include<stdio.h>
func()
{
	int a,b,c;
	static int sum=0;
	printf("Enter number of sausages you want\n");
	scanf("%d",&a);
	if(a>10)
	{
		system("CLS");
		printf("SORRY WE ARE NOT ACCEPTING LARGE ORDERS RIGHT NOW!\n");
		printf("DO YOU WANT TO RE-ORDER?\n1. YES\n2. NO\n");
		scanf("%d",&c);
		if(c==1)
		{
		
		system("CLS");
		func();
		return;
		}
	
	
		
		
	}
		
	
	printf("Enter amount of each sausage\n");
	scanf("%d",&b);
	sum=a*b;
	if(a>3 || a<11)
	{
		printf("YOU HAVE RECIEVED 10 PERCENT OFF\n");
		sum-=sum/10;
	}
	printf("Your bill is %d",sum);
	
}
main()
{
	func();
}
