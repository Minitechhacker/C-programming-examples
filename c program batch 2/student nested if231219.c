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
	if(m1>35 && m2>35 && m3>35)
	{
		
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
	else if(avg>60 && avg<69)
	{
		printf("\n grade D");
	}
	else if(avg>50 && avg<59)
	{
		printf("\n grade E");
		
	}
	else if(avg<49)
	{
		printf("\n no grade");
	}
	else
	{
		printf("\n your fail:");
		printf("\n no grade:");
	}
}
}

