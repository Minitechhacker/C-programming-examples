#include<stdio.h>
int main()
{
	int m1,m2,m3,m4;
	float avg,total;
	printf("enter the two values:");
	scanf("\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	printf("total:%f",total);
	avg=total/4;
	printf("avg:%f",avg);
	if(m1>35&&m2>35&&m3>35&&m4>35)
	{
		printf("\n enter the value:");
	}
	if(avg>90 && avg<100)
	{
	printf("\n best score:");
}
else if (avg>80 && avg<90)
{
	printf("\n good score:");
}
else if (avg>70 && avg<90)
{
	printf("\n moderate score :");
}
else if(avg>60&&avg<80)
{
	printf("\n avg score:");
}
else if (avg<35)
{
	printf("\n weak :");
}
else
{
	printf("your fail:");
	}
}
