int  main()
{
	int n;
	float total;
	char clause,coupon,refreshment;
	printf("\n enter the no of tickets:");
	scanf("%d",&n);
	printf("\n enter the cricle:");
	scanf("%c",&clause);
	printf("\n do you have coupon code:");
	scanf("%c",&coupon);
	printf("\n do you want refreshment:");
	scanf("%c",&refreshment);
	if(clause=='k')
	{
		total=n*75;
		if(n>25)
		{
		total=total-total*10/100;
		}
		if(coupon=='y')
		{
			total=total-total*2/100;
		}
		if(refreshment=='y')
		{
			total=total+n*50;
		}
		}
		if(clause=='q')
		{
			total=n*150;
			if(n>25){
				total=total*10/100;
			}
		}
		if(coupon=='y')
		{
			total=total-total*2/100;
			
		}
		if(refreshment=='y')
		{
			total=total+n*50;
		}
	
	printf("the total price of the ticket :%2f",total);
	return 0;
}

