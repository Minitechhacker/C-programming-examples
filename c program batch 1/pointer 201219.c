#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b;
	int *m;
	m=&a;
	printf("\n %d",a);             //5
	printf("\n %d",m);             //678669
	printf("\n %d",++*m);            //6
	b=*m;
    printf("\n %d",b);
    getch();

}
