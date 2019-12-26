#include<stdio.h>
void swap(int *,int *);
void main()
{
	int x,y;
	printf("x:");
	scanf("%d",&x);
	printf("Y:");
	scanf("%d",&y);
	printf("before swap\n x=%d \t y=%d \n",x,y);
	swap(&x,&y);
	printf("after swap\n x=%d \t y=%d \n",x,y);
}
	void swap(int *a,int *b)
	{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
