// pointerss example codiong - arithemetic
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter the number 1 :");
	scanf("%d",&x);
	printf("enter the number 2 :");
	scanf("%d",&y);
	int *p1,*p2;
	p1=&x;
	p2=&y;
	printf("%d + %d = %d",*p1,*p2,(*p1+*p2));
	return 0;
}
