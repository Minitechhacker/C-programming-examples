#include<stdio.h>
void main()
{
	int a,b,calculate,sum;
	printf("calculations...!!!\n");
	printf("1.add\n2.sub\n3.mul");
	printf("\nenter your choice:\n");
	scanf("%d",&calculate);
		switch (calculate)
		{
			case 1:
				printf("enter two numbers:");
				scanf("%d%d",&a,&b);
				sum=a+b;
				printf("the sum is:%d",sum);
				break;
			case 2:
				printf("enter two numbers:");
				scanf("%d%d",&a,&b);
				sum=a-b;
				printf("the ans is:%d",sum);
				break;
			case 3:
				printf("enter two numbers:");
				scanf("%d%d",&a,&b);
				sum=a*b;
				printf("the anss is:%d",sum);
				break;
			default :
				printf("invalid");
				break;
		}
		getch();
	}
	
