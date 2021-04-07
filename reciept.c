#include<stdio.h>
main()
{
	int i;
	static int sum=0;
	char a;
	int b;
	printf(" please select your item\n1. Jeans\n2. Shoes\n3. Shirts\n4. Tie\n5. Print reciept\n");
	scanf("%d",&i);
	switch(i==1)
	{
		case 1:
			{
				sum+=500;
			
			}
			system("CLS");
			main();
			case 0:
				{
					switch(i==2)
					{
						case 1:
							{
								sum+=700;
								
							}
							system("CLS");
							main();
							case 0:
								{
									switch(i==3)
									{
										case 1:
											{
												sum+=900;
											
												
											}
											system("CLS");
												main();
											case 0:
												{
													switch(i==4)
													{
														case 1:
															{
																sum+=100;
															
																
															}
															system("CLS");
																main();
															case 0:
																{
																	if(i==5)
																	{
										                                printf("press 'q' to recieve 50 percent discount?\n");
																			scanf(" %c",&a);
																		if(a=='q')
																		{
																			sum-=sum/2;
																		}
																		printf("Your bill is %d",sum);
																		break;
																		
																	}
																
																
																
																		
																	}
																}
													}
												}
									}
								}
							
					}
				}
	
	}
	
		



