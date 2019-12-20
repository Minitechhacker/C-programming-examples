int main()
{
	int m1,m2,m3,m4,m5,tot,avg;
	printf("Enter 5 marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if(m1>=50&&m2>=50&&m3>=50&&m4>=50&&m5>=50)
	{
	printf("cleared");
	tot=m1+m2+m3+m4+m5;
	avg=tot/5;
	printf("\n Your Total is:%d",tot);
	printf("\n Your Average is:%d",avg);
    }
	else{ printf(" the student has failed");
	}
	return 0;
}
