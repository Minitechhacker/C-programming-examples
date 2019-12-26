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
		printf("\n1.capital city of himachal pradesh?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
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
		printf("\n2.capital city of karnataka?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
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
		printf("\n3.when did india got freedom for british?\n\na.1997\t\tb.1947\nc.1950\t\td.1945\n");
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
		printf("\n4.which city is called as silicon valley of india?\n\na.delhi\t\tb.chennai\nc.shimla\td.bangalore\n");
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
		printf("\n5.which of these mentioned below arent union territory of india?\n\na.delhi\t\tb.ladhak\nc.chandigarh\td.dehradhun\n");
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
		printf("\n6.any number multiplied by 0 will give ____?\n\na.the number itself\t\tb.zero\nc.infinity\t\td.none of the above\n");
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
		printf("\nQUESTION NO.7");
		printf("\n");
		printf("\n7.fullform of uk?\n\na.united king\t\tb.united kingdom\nc.both a and b\t\td.none of the above\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"united kingdom")==0 || strcmp(ans1,"b")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is united kingdom");
		}
		printf("\n");
			printf("\nQUESTION NO.8");
		printf("\n");
		printf("\n8.people of himachal pradesh is called as _____ ?\n\na.himachalians\t\tb.himachalis\nc.himalayans\t\td.none of the above\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"himachalis")==0 || strcmp(ans1,"b")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is himachalis");
		}
		printf("\n");
		printf("\nQUESTION NO.9");
		printf("\n");
		printf("\n9.present captian of indian cricket team?\n\na.dhoni\t\tb.rohit\nc.raina\t\td.virat\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"virat")==0 || strcmp(ans1,"d")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is virat");
		}
		printf("\n");
		printf("\nQUESTION NO.10");
		printf("\n");
		printf("\n10.which place is located in the bottom most tip of india?\n\na.kanyakumari\t\tb.rameshwaram\nc.madurai\t\td.pondicherry\n");
		scanf("%s",&ans1);
		if(strcmp(ans1,"kanyakumari")==0 || strcmp(ans1,"a")==0)
		{
		printf("\nanswer is correct ");
		mark=mark*1;
		net=net+mark;
	    printf("\nyou have scored one mark");
		}
		else
		{
			printf("answer is wrong, the correct answer is kanyakumari");
		}
		printf("\n");
		printf("\nThank you!!!! you have completed the quiz");
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
