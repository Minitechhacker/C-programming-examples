#include<stdio.h>//header file-->scanf(),printf(),gets(),
//puts(),getc(),putc(),getchar(),putchar()
#include<conio.h>
//clrscr(),getch()
//using namespace std;//No need for c
//std:scanf()
//std:printf()
main()//start of the progarms
{
    int age;//declaration part

    printf("Enter the value is:");
    //scanf("formated string",&variables)
    scanf("%d",&age);
    if(age>=18)
    {
        //printf("Stringcontant,formated string",variables)
        printf("Your age is high%d",age);
    }
    else
    {
        printf("Your age is low%d",age);
    }
    //printf("Result is:%d",age);
}
