#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the required table");
		printf("\nenter no of line");
	scanf("%d%d",&a,&b);
	for(c=0;c<=b;c++)
	{
		printf("\n %dx%d = %d",c,a,c*a);
	}
}
