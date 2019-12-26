#include<stdio.h>
#include<conio.h>
void main()
{
	int quiz,i,mark=1,net=0;
	char ans1[10],ans2[20],name[20];
	do
	{
	printf("\tQUIZ\t");
	printf("\nOBJECTIVES TYPE QUESTIONS");
	printf("\n enter your name:");
	scanf("%s",&name);
	printf("\n1.click 1 to start the quiz\n2.click 2 to exit\n");
	scanf("%d",&quiz);
switch(quiz)
{
	case 1:
		printf("\n!!!!!!!!!!!!!! GAME ON !!!!!!!!!!!!!!!");
		printf("\nQUESTION NO.1");
		printf("\n");
		printf("1.capital city of himachal pradesh?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"shimla")==0 || strcmp(ans1,"c")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is shimla");
		}
		printf("\n");
        printf("\nQUESTION NO.2");
		printf("\n");
		printf("1.capital city of karnataka?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
		scanf("%s",&ans2);
		if(strcmp(ans2,"bangalore")==0 || strcmp(ans1,"d")==0)
		{
			printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is bangalore");
		}
		printf("\n");
		printf("\nQUESTION NO.3");
		printf("\n");
		printf("3.when did india got freedom for british?\n\na.1997\t\tb.1947\nc.1950\td.1945\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"1947")==0 || strcmp(ans1,"b")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is 1947");
		}
		printf("\n");
			printf("\nQUESTION NO.4");
		printf("\n");
		printf("4.which city is called as silicon valley of india?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"bangalore")==0 || strcmp(ans1,"d")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is bangalore");
		}
		printf("\n");
			printf("\nQUESTION NO.5");
		printf("\n");
		printf("5.which of these mentioned below arent union territory of india?\n\na.delhi\t\tb.ladhak\nc.chandigarh\td.dehradhun\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"dehradhun")==0 || strcmp(ans1,"d")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is dehradhun");
		}
		printf("\n");
			printf("\nQUESTION NO.6");
		printf("\n");
		printf("6.any number multiplied by 0 will give ____?\n\na.the number itself\t\tb.zero\nc.infinity\td.none of the above\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"zero")==0 || strcmp(ans1,"b")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is zero");
		}
		printf("\n");
		break;
		case 2:
			printf("you have quit the game");
			break;
		default:
			printf("invalid");
			break;
			
}
printf("\nclick 3 to view the main menu\nclick 0 to view the result\n");
scanf("%d",&i);
}
while(i==3);
printf("\ntotal marks scored:%d",net);
if(net<=5)
{
	printf("\nhello %s bad with your general knowledge",name);
}
else
{
	printf("\nwelldone! %s good job",name);
}
}
