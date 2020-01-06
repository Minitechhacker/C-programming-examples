#include<stdio.h>
void main()
{
	int age;
	printf("what is your age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("\n eligiable for vote:");
		printf("\nthank you");
		printf("\nnow time:12:26pm");
	}
	else 
	{
		printf("\n not eligiable for vote:");
		printf("\ntry again:");
	}
}
