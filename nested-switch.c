#include<stdio.h>
main()
{
	int a;
	float t;
	printf("Enter amount");
	scanf("%d",&a);
	printf("Enter departure time (pm)",&t);
	scanf("%f",&t);
	t= 22-t;
	switch(t>=16 && a<=50 )
	{
		case 1:
			printf("go from bus");
			break;
			case 0 :
				switch(t>=14 && a>=70)
				{
				case 1:
				printf("go from car");
				break;
				case 0 :
					switch (t>=10 && a>=234)
					{
					
					case 1:
						printf("go from train");
						break;
						case 0:
							switch(t>=3 && a>=247)
							{
							
							case 1:
								printf("go from airplane");
								break;
								default:
									printf("dont go");
			}
			
				
			}
				
				
			}
			
				
				
			}
				 
				
					
					
				
	}
