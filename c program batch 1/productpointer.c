//product using pointers
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,product;
	int *p1,*p2;
	printf("enter num1:");
	scanf("%d",&x);
	printf("enter num2:");
	scanf("%d",&y);
	p1=&x;
	p2=&y;
	product=((*p1)*(*p2));
	printf("product of %d * %d = %d",*p1,*p2,product);
	return 0;
	
}
