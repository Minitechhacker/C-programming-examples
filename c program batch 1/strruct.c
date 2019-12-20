#include<stdio.h>
#include<conio.h>
struct school
{
	char name[10];
	int m1,m2,m3;
	float total,avg;
};
void main()
{
	struct school o1;
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
	
}
