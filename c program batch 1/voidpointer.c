// void pointer
#include<stdio.h>
void main()
{
	int a=10;
	char c='m';
	float b=100.00;
	void *p;
	p=&a;
	printf("integer:%d",*((int*)p));
	p=&c;
	printf("\ncharacter:%c",*((char*)p));
	p=&b;
	printf("\ndecimal:%f",*((float*)p));
}
