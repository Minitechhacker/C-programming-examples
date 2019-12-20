/*logical operators
&& and
|| or
! not
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the  two number:");
	scanf("%d%d",&a,&b);
	printf("result is %d",((a>100)&&(b<=200)));
}
