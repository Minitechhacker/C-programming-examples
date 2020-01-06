#include<stdio.h>

void main()
{
	int m1,m2,m3;
	float tot,avg;
	printf("what is your three marks:");
	scanf("%d%d%d",&m1,&m2,&m3);
	tot=m1+m2+m3;
	printf("your total is:%f",tot);
	avg=tot/3;
	printf("your avg is:%f",avg);
	if(avg>90 && avg<100)
	{
		printf("\nyour grade is A");
	}
	else if(avg>80 && avg<89)
	{
		printf("\nyour grade is B");
	}
	else if(avg>70 && avg<79)
	{
		printf("\nyour grade is C");
	}
	else if(avg>60 && avg<69)
	{
		printf("\nyour grade is D");
	}
	else
	{
		printf("\nNo grade");
	}
}
