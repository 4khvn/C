#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter first number",&a);
	scanf("%d",&a);
	printf("Enter second number",&b);
	scanf("%d",&b);
	printf("Enter third number",&c);
	scanf("%d",&c);
	switch (a>b && a>c)
	{
		case 1:
			printf("%d is maximum number",a);
			break;
			case 0:
				switch ( b>c && b>a)
				{
					case 1:
						printf("%d is maximum number",b);
						break;
						case 0:
							switch (c>a && c>b)
							{
								case 1:
							
								printf("%d is maximum number",c);
								break;
								case 0 :
									printf("error");
							}
				}
	}
}
