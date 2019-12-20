int main()
{
	int days,pay,income,totalamount;
	printf("\n enter the number of days:");
	scanf("%d",&days);
	printf("\n enter the pay:");
	scanf("\%d",&pay);
	income=pay+days;
	totalamount=income/365*100;
	printf("\%d",&income);
	printf("%d",&totalamount);
     return 0;
}
