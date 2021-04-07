#include<stdio.h>
main()
{
	int h,c,t;
	printf("Enter hardness of metal ",h);
	scanf("%d",&h);
	printf("Enter tensile strenght of metal",t);
	scanf("%d",&t);
	printf("Enter carbon content of metal",c);
	scanf("%d",&c);
	
	switch(h>50&&t>5600&&c<0.7)
	{
		case 1 :
			printf("Metal is Grade 10");
			break;
			case 0:
				switch (h>50&&t<5600&&c<0.7)
				{
					case 1:
						printf("Metal is grade 9");
						break;
						case 0:
							switch (h<50&&t>5600&&c<0.7)
							{
								case 1:
									printf("Metal is grade 8");
									break;
									case 0:
										switch (h>50&&t>5600&&c>0.7)
										{
											case 1:
												printf("metal is grade 7");
												break;
												case 0:
													switch(h>50&&t<5600&&c>0.7 || h<50&&t<5600&&c<0.7 || h<50&&t>5600&&c>0.7)
													{
														case 1:
															printf("Metal is grade 6");
															break;
															case 0:
																switch (h<50&&t<5600&&c>0.7)
																{
																	case 1:
																		printf("metal is grade 5");
																		break;
																		case 0:
																			printf("Metal is useless");
																			break;
																}
										
														
													}
										}
							}
				}
	}
	
}
