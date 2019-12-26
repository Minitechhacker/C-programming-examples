// array pointers
#include<stdio.h>
int main()
{
float a[5]={100.00,200.00,300.00,400.00,500.00};
float *p;
int i;
p=a;
printf("\n array pointers\n");
for(i=0;i<5;i++)
{
	printf("*(p+%d):%f\n",i,*(p+i));
	}	
	return 0;
}
