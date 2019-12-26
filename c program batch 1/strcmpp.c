//string handling - string compare
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20]="helloworld";
	char s2[25]="hello world";
	if(strcmp(s1,s2)==0)
	{
		printf("is same");
	}
	else
	{
		printf("not same");
	}
}
