#include<stdio.h>
void main()
{
	int a,b,c;
	float d,e,f;
	printf("enter the numbers for addition:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addition:%d",c);
	printf("enter the numbers for subtraction:");
	scanf("%f%f",&d,&e);
	f=d-e;
	printf("subtraction:%0.3f",f);
}
