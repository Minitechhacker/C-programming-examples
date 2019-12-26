#include<stdio.h>
struct school
{
	char name[100];
	int m1,m2;
	float total,avg;
};
void main()
{
	struct school a;
	printf("name:");
	scanf("%s",a.name);
	printf("\nmarks:");
	scanf("%d%d",&a.m1,&a.m2);
	a.total=a.m1+a.m2;
	a.avg=a.total/3;
	printf("\nname:%s",a.name);
	printf("\nm1:%d",a.m1);
	printf("\nm2:%d",a.m2);
	printf("\ntotal:%f",a.total);
	printf("\naverage:%f",a.avg);
}

