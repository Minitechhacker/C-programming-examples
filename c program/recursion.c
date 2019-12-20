#include<stdio.h>
#include<conio.h>
void rev(int);
void main()
{
	rev(100);

}
void rev(int n)
{
	if(n<=0)
	printf("\n ended");
	else
	{
		printf("%d\n",n);
		rev(n-1);
		
	}
}
