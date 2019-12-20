#include<stdio.h>
#include<conio.h>
main()
{
    int sal,bns;
    printf("Enter the salary is:");
    scanf("%d",&sal);
    if(sal>=20000)
    {

        bns=sal+100;
        printf("Your salary is:%d",bns);
    }
    else
    {

        bns=sal+1000;
        printf("Your salary is:%d",bns);
    }
}
