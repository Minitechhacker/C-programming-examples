#include<stdio.h>
#include<stdlib.h>
int one();
int two();
int three();
int four();
int score();

int main()
{


    printf("\n\n\n\n\t\t\t\t       welcome to the quiz game");
	int ch,hiscr,i,point=0,k,qty;


printf("\n*********************************************************************************************************");
	printf("\n\t\t\t\t\tTo start press 1");
	printf("\n*********************************************************************************************************");
	printf("\n\t\t\t\t\tHIGH SCORE 2");
	printf("\n*********************************************************************************************************");
	printf("\n\t\t\t\t\t   QUIT3");
	printf("\n*********************************************************************************************************");
		printf("\n\t\t\t\t\tSelect 1,2,3 -\n");
		printf("*********************************************************************************************************");
	scanf("\n%d",&ch);
if(ch==2)
{
    printf("hogh score is 10");
}
else if (ch==3)
{
   // exit(0);
}
else if(ch==1)

{

switch(ch)
{

    case 1:
    printf("\n1. How many days do we have in a week?\n\n1.9\t 2.8\n3.7\t 4.6");
    i=three();
   // if(i==3)
     //   point++;

    printf("%d",i);
    i=score();


      case 2:
    printf("\n2. How many days are there in a year?\n 1.300 \t 2.365 \n3.375 \t 4.360");
    i=two();
 //   if(i==2)
   //     point++;

    printf("%d",i);
    i=score();


      case 3:
    printf("\n3. How many colours are there in a rainbow?\n 1.7 \t 2.8 \n3.9 \t 4.10");
   i=one();
 //   if(i==1)
   //     point++;

    printf("%d",i);

i=score();


      case 4:
    printf("\nWhich animal is known as the ‘Ship of the Desert?\n 1.cow \t 2.deer \n 3.dog \t 4.camel");
    i=four();
    //if(i==4)
    //    point++;

    printf("%d",i);
i=score();



      case 5:
    printf("\n5.In which direction does the sun rise?\n 1.East \t 2.West \n 3.North \t 4.South");
    i=one();
  //   if(i==1)
//        point++;

    printf("%d",i);
i=score();



      case 6:
    printf("\n6.How many letters are there in the English alphabet?\n 1.22 \t 2.24 \n 3.26 \t 4.27");
    i=three();
  //   if(i==3)
//        point++;
    printf("%d",i);
i=score();


    case 7:
    printf("\nwhich is correct\n 1.ABCD \t 2.BCDA \n 3.CDAB \t 4.DABC");
   i=one();
    //if(i==1)
   //     point++;

    printf("%d",i);

i=score();

      case 8:
    printf("\n8.Which month of the year has the least number of days?\n 1.Jan \t 2.Feb \n 3.Mar \t 4.Apr");
   i=two();

    printf("%d",i);


i=score();


      case 9:
    printf("\n9.How many zeros are there in one hundred thousand?\n 1.1 \t 2.2 \n 3.4\t 4.5");
   i=four();
  // if(i==4)
//        point++;
    printf("%d",i);
i=score();



      case 10:
    printf("\n10.How many hours are there in two days?\n 1.48 \t 2.24 \n 3.36 \t 4.44");
    i=one();
      //  if(i==1)
    //    point++;

    printf("%d",i);

i=score();

      case 11:
    printf("\n11.Which animal is called King of Jungle?\n 1.lion \t 2.Deer \n 3.Hippo \t 4.Bear");
   i=one();
  //  if(i==1)
//        point++;

    printf("%d",i);
i=score();




      case 12:
    printf("\n12.How many bones does an adult human have?\n 1.202 \t 2.203 \n 3.204 \t 4.205");
    i=four();
    //if(i==4)
      //  point++;
i=score();
    printf("%d",i);




      case 13:
    printf("\n13.How many primary colours are there?\n 1.RDV \t 2.RGB \n 3.ROB \t 4.GGB");
    i=two();
    //if(i==2)
        //point++;

    printf("%d",i);
i=score();


      case 14:
    printf("\n14.How many millimetres are there in 1cm?\n 1.10\t 2.11 \n 3.12 \t 4.9");
   i=one();
     //if(i==1)
       // point++;
i=score();
    printf("%d",i);



      case 15:
    printf("\n15.How many days are there in the month of February in a leap year?\n 1.27 \t 2.28 \n 3.29 \t 4.30");
   i=three();
  // if(i==3)
    //    point++;

    printf("%d",i);
i=score();

    printf("\n*********************************************************************************************************");
   printf("\n\t\t\t\t\t\t\t your score is %d",i);
 printf("\n*********************************************************************************************************");

}

	}
}




    int one()
	{
int i;
scanf("%d",&i);
    if(i==1)
    {
        printf("correct");

    }
    else
    {
        printf("wrong The ans is option 1");

    }

return 0 ;
	}

	 int two()
	{
int i;
scanf("%d",&i);
    if(i==2)
    {
        printf("correct");
    }
    else
    {
        printf("wrong The ans is option 2");

    }

   return 0;
	}
int three()
	{
int i;
scanf("%d",&i);
    if(i==3)
    {
        printf("correct");


    }
    else
    {
        printf("wrong The ans is option 3");
    }
//return 0;

	}
	 int four()
	{
int i;
scanf("%d",&i);
    if(i==4)
    {
        printf("correct");
    }

    {
        printf("wrong The ans is option 4");

    }
    return 0;
	}

	int score()
	{
	    int i, point=0;
	    if(i==1)
        {
            point++;
        }
        else if (i==2)
        {
            point++;
        }
         else if (i==3)
        {
            point++;
        }
         else if (i==4)
        {
            point++;
        }
	}
