#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][3]={{1,2,3},{5,6,7},{9,7,5},{7,0,6}};
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
