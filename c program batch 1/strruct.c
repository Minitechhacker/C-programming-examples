#include<stdio.h>
#include<conio.h>
int add();
struct school
{
	char name[10];
	int m1,m2,m3;
	float total,avg;
};
int add()
{
	int a=10,b=8,c;
	c=a+b;
	return c;
}
void main()
{
	int s;
	s=add();
	printf("\n %d",s);
	struct school o1;
	struct school o2;
	printf("\n enter your name:");
	scanf("%s",o1.name);
	printf("\n enter your marks:");
	scanf("%d%d%d",&o1.m1,&o1.m2,&o1.m3);
	o1.total=o1.m1+o1.m2+o1.m3;
	o1.avg=o1.total/3.0;
	printf("\nName : %s",o1.name);
	printf("\n m1 :%d",o1.m1);
	printf("\n m2 :%d",o1.m2);
	printf("\n m3 :%d",o1.m3);
	printf("\n mtotal :%0.2f",o1.total);
	printf("\n avg :%0.2f",o1.avg);
	
	
	
	printf("\n enter your name:");
	scanf("%s",o2.name);
	printf("\n enter your marks:");
	scanf("%d%d%d",&o2.m1,&o2.m2,&o2.m3);
	o2.total=o2.m1+o2.m2+o2.m3;
	o2.avg=o2.total/3.0;
	printf("\nName : %s",o2.name);
	printf("\n m1 :%d",o2.m1);
	printf("\n m2 :%d",o2.m2);
	printf("\n m3 :%d",o2.m3);
	printf("\n mtotal :%0.2f",o2.total);
	printf("\n avg :%0.2f",o2.avg);
	
	
}
