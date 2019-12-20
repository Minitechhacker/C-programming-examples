int main()
{
	int s1,s2,s3,s4,tot,avg;
	printf("\n enter the marks:");
	scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
	if(s1>=50&&s2>=50&&s3>=50&&s4>=50)
	{
		printf("\n the student passed");
		tot=s1+s2+s3+s4;
		avg=tot/4;
		printf("\n%d",tot);
		printf("\n%d",avg);
	}
	else if(avg>=90||avg>=80||avg>=70||avg>=60)
	{
	printf("\n grade A");
	printf("\n grade B");
	printf("\n grade C");
	printf("\n grade D");
	}
	else{ printf("\n student failed");
	}
	return 0;
}
