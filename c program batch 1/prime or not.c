int main()
{
	int i,n,flag=0;
	printf("\n ENTER THE NUMBER:");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i)
	{
	if(n%i==0)
	{
	flag=1;
}
if(n==1)
{
printf(" 1 is a composite number" );
}
else
{
	if(flag==0)
	{printf("\n its a prime number:%d",n);}

	else
	{
	printf("\n its not a prime number%d",n);
	}
	
}
}
return 0;
	}
