#include<stdio.h>
#include<conio.h>
void main()
{
	int steat=1;
	int cus;
	printf("\ntoday customers:");
	scanf("%d",&cus);
	while(steat<=cus)
	{
		printf("\n steat:%d",steat);
		steat++;
	}
	printf("house full");
}
