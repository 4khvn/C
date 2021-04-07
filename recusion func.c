#include<stdio.h>
f1(int a)
{
	// base condition
	if(a>10)
	return;
	// change or update of arguement
	a++;
	printf("%d\n",a);
	// recursive call
	f1(a);
	return;
}
main()
{
	f1(1);
}

