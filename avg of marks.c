#include<stdio.h>
void func(int a[20][5])
{
	int i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,avg1=0,avg2=0,avg3=0,avg4=0,avg5=0;
	printf("Enter marks in maths\n");
	for(i=0;i<1;i++){
	for(j=0;j<19;j++){
	scanf("%d",&a[j][i]);
	sum1+=a[j][i];}}
	system("CLS");	
		printf("Enter marks in physics\n");
	for(i=1;i<2;i++){
		for(j=0;j<19;j++){
			scanf("%d",&a[j][i]);
			sum2+=a[j][i];	}}	
			system("CLS");
	printf("Enter marks in programming\n");
	for(i=2;i<3;i++){
	for(j=0;j<19;j++){
			scanf("%d",&a[j][i]);
			sum3+=a[j][i];	}}
			system("CLS");	
	printf("Enter marks in calculus\n");
	for(i=3;i<4;i++){
		for(j=0;j<19;j++){
			scanf("%d",&a[j][i]);
			sum4+=a[j][i];	}}	
			system("CLS");
	printf("Enter marks in P.st\n");
	for(i=0;i<2;i++){
	for(j=0;j<19;j++){
			scanf("%d",&a[j][i]);
			sum5+=a[j][i];	}}
	system("CLS");
	printf("\nAverage of Maths Marks\n");
	avg1=sum1/20;
	printf("%d",avg1);
	printf("\nAverage of Physics Marks\n");
	avg2=sum2/20;
	printf("%d",avg2);
	printf("\nAverage of programming marks\n");
	avg3=sum3/20;
	printf("%d",avg3);
	printf("\nAverage of calculus marks\n");
	avg4=sum4/20;
	printf("%d",avg4);
	printf("\nAverage of P.st marks\n");
	avg5=sum5/20;
	printf("%d",avg5);}
	main()
	{
		int a[20][5];
		func(a);
	}

