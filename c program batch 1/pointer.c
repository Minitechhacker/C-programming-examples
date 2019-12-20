#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b;
	int *m;
	m=&a;
	printf("\n %d",a);
	printf("\n %u",m);
	printf("\n %d",++*m);
	b=*m;
	printf("\n %d",b);
}
