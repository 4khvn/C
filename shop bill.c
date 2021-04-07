#include<stdio.h>
int func(sum1)
{
	
	int a,b;
  printf("Enter Number of dresses you want to buy\n");
	scanf("%d",&a);
	printf("Enter amount of each dress\n");
	scanf("%d",&b);
	system("CLS");
sum1=a*b;
if(a>=2);
{
	printf("YOU HAVE RECIEVED 10 PERCENT OFF\n");
	sum1-=sum1/10;
	
}
printf("your bill is %d\n",sum1);
return sum1;

}


	

main()
{

   int sum1= func(sum1);
   
	int a,b;
	static sum2=0;
		printf("**TWO DAYS LATER**\n");
printf("Enter Number of dresses you want to buy\n");
	scanf("%d",&a);
	printf("Enter amount of each dress\n");
	scanf("%d",&b);
	system("CLS");
	
	sum2=a*b;
	if(a>=2)
	{
		printf("YOU HAVE RECIECED 10 PERCENT OFF\n");
		sum2-=sum2/10;
	}
	printf("YOUR PREVIOUS BILL : %d\n",sum1);
	printf("your bill is %d\n",sum2);
	printf("TOTAL BILL = %d\n",sum1+sum2);
	
}
