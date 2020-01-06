#include<stdio.h>

int main()
{
	double b[5]={100.00,200.00,300.00,400.00,500.00};
	double *p;
	int i;
	p=b;
	printf("array values using pointer\n:");
	for(i=0;i<5;i++)
	{
		printf("*(p +%d) :%f\n",i,*(p+i));
		
	}
	return 0;
}
