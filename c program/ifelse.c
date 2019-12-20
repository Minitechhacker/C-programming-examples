#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("\nwhat is your age?:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n your eligiable for vote:");
		printf("\n thank you");
}
	else
	{
		printf("\n you are not eligiable for vote");
		printf("\n try again");
	}
	getch();
}
