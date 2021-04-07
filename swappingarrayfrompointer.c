#include<stdio.h>
main()
{
	int a=2,b=3;
	int*c=&a;
	int*d=&b;
	int e;
	printf("%d %d\n",*c,*d);
	 e=*c;
     *c=*d;
     *d=e;
     printf("%d %d ",*c,*d);
}
