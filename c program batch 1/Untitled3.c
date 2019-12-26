#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\1.add\2.sub");
	printf("enter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("enter the number");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("the sum is %d",c);
			break;
			
		case 2:
			printf("enter the numbers");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("the sum is %d",c);
			break;
			
		default :
			printf("invalid");
			break;
			
}
}
			
	

