#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    int sal;
    printf("Enter the n value is:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        //int sal;
        printf("Enter the salary :");
        scanf("%d",&sal);
        printf("Your salary is:%d",sal);
        break;
    case 2:
        printf("Case 2");
        break;
    default:
        printf("default statment");
        break;

    }
}
