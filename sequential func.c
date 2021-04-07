#include<stdio.h>
// Sequential function call
f1()
{
	printf(" Funtion 1\n");
	f2();
}
f2()
{
	printf("Function 2");
}
main()
{
	f1();
}
