int main()
{
	int s1,s2,s3,s4,s5,total,avg,grade;
	printf("\n ENTER THE MARKS OF 5 SUBJECT:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	if(s1>=40&&s2>=40&&s3>=40&&s4>=40&&s5>=40)
	{
		printf("\n the student passed the exam");
		total=s1+s2+s3+s4+s5;
		avg=total/5;
		printf("\n the total is: %d",total);
		printf("\n the avg is: %d",avg);
	
	if(avg>=90)
	{printf("\n grade A");
	}
	else if(avg>=80)
	{printf("\n grade B");
    }
    else if(avg>=70)
    {
    	printf("\n the grade C");
	}
	else if(avg>=60)
	{printf("\n the grade D");
	}
	else
	{printf("\n Below Average");
	}
}
	else
	{printf("\n the student fail");
	}
	return 0;

}
