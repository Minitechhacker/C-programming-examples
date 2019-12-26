//array pointer example 2
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	int *p=a;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
