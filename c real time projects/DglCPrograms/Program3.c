#include<stdio.h>
#include<conio.h>
main()
{
    int age,sal,bns;
    printf("Enter the age is:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Enter your salary is:");
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
    else
    {
      printf("Your age is low");
    }
}
