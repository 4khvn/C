#include<stdio.h>
#include<math.h>
main()
{
	int a,b;
	printf("enter number",&a);
	scanf("%d",&a);
	printf("enter exponent",&b);
	scanf("%d",&b);
	int result = pow(a, b);
	
	printf("%d^%d = %d",a,b,result);
}
