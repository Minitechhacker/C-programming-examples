#include<stdio.h>
void main()
{
	int a[3]={1,2,3};
	int *p,i;
	p=&a;
	for(i=0;i<3;i++)
	{
		printf("array of pointer values:%d",*p);
        printf("array of pointer values:%u",p);
		*p++;
	}
}
