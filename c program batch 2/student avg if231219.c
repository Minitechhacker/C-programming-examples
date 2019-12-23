#include<stdio.h>

void main()
{
	int m1,m2,m3;
	float tot,avg;
	printf("what is your three marks:");
	scanf("%d%d%d",&m1,&m2,&m3);
	tot=m1+m2+m3;
	printf("\nyour total :%f",tot);
	avg=tot/3;
	printf("\n your avg :%0.2f",avg);
	if(avg>90 && avg<100)
	{
		printf("\n grade A");
	}
	else if(avg>80 && avg<89)
	{
		printf("\n grade B");
		
	}
	else if(avg>70 && avg<79)
	{
		printf("\n grade C");
	}
	else
	{
		printf("\n no grade");
	}
}
