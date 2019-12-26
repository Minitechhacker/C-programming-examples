#include<stdio.h>
void main()
{
	long int i,tab;
	printf("MULTIPLICATION TABLES...\n");
	printf("\n1.fifth tables\n2.sixth tables\n3.seventh tables\n4.eigth tables\n5.nineth tables\n6.tenth tables\n");
	scanf("%d",&tab);
	switch(tab)
	{
	case 1:
			//printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n5 * %d = %d",i,5*i);
	}
	break;
	case 2:
			//printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n6 * %d = %d",i,6*i);
	}
	break;
	case 3:
	//		printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n7 * %d = %d",i,7*i);
	}
	break;
	case 4:
	//		printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n8 * %d = %d",i,8*i);
	}
	break;
	case 5:
	//		printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n9 * %d = %d",i,9*i);
	}
	break;
	case 6:
	//		printf("enter the value of n:");
	//scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n10 * %d = %d",i,10*i);
	}
	break;
	default :
		printf("invalid number");
		break;
	}
	
	getch();
}
