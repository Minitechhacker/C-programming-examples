int main()
{
	int phour,emp,totamount;
	printf("\n ENTER THE NO OF EMP and hours per day:");
	scanf("%d%d",&emp,&phour);
	totamount=emp*phour*100*365;
	printf("\n the total amount gained in a year:%d",totamount);
	return 0;
	
}
