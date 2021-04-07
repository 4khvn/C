#include<stdio.h>
main()
{
	int c,d;
	char op;
	printf("Enter Operator",&op);
	scanf("%c",&op);
    printf("Enter two numbers",&c,&d);
	scanf("%d %d",&c,&d);
	

	
	switch (op)
	{
		case '+':
			printf("%d + %d = %d",c,d,c+d);
			break;
			case '-' :
				printf("%d - %d = %d",c,d,c-d);
				break;
				case '*' :
					printf("%d x %d = %d",c,d,c*d);
					break;
					case '/' :
						printf("%d / %d = %d",c,d,c/d);
						break;
						default:
							printf("invalid ");
		
	}
}
