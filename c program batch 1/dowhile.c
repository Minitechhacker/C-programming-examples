#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("enter your numbers:");
	scanf("%d",&i);
	printf("enter your while numbers:");
	scanf("%d",&n);
	do
	{
		printf("\n%d:",i);
		i++;
	}
		while(i<=n);
		printf("\n end");
	}
