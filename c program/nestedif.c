#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10];
	float m1,m2,m3,tot;
	float avg;
	printf("\nenter your name:");
	scanf("%s",name);
	printf("\nenter your three marks");
	scanf("%f%f%f",&m1,&m2,&m3);
	tot=m1+m2+m3;
	printf("\nthis your total mark:%f",tot);
	avg=tot/3;
	printf("\nthis your avg :%f",avg);
	if(m1>35&&m2>35&&m3)
	{
		printf("\nyour pass:");;
		
		if(avg>=90&&avg<=100)
		{
			printf("\ngrade: A-grade");
		}
		
		else if(avg>=80&&avg<=89)
		{
			printf("\n grade: B-grade");
		}
		else {
			printf("\n grade: C-grade");
		}
	}
	
else
{
	printf("\nyour fail:");
	printf("\nno grade");
}

getch();
}
