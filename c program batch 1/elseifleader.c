#include<stdio.h>
#include<conio.h>
int main()
{
	int pre,cur,tot,i;
	printf("\nenter the your pre unit:");
	scanf("%d",&pre);
	printf("\nenter the your cur unit:");
	scanf("%d",&cur);
	tot=cur-pre;
	printf("\nyour total %d",tot);
if(tot==0)
{
	printf("\nno bill");
	
}
else if((tot>=1)&&(tot<100))
{
      i=tot*15;
	printf("\nper unit is 15 rs,total amount is  :%d",i);
}
else if ((tot>=101)&&(tot<200))
{
	i=tot*20;
	printf("\nyour unit is 20 rs,total amount is :%d",i);
	
	
}
else if((tot>=201)&&(tot<300))
   {
   	i=tot*25;
	printf("\nyour unit is 25 rs,total amount is :%d",i);
	
   } 
   else 
   {
   	i=tot*30;
   	printf("\n your units is 30 rs,total amount is:%d",i);
   }
	getch();
}
