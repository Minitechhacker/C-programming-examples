int main()
{
	int i,n,sum;
	printf("\n enter the age:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=i*i*i;
		printf("\n value: %d = coin got: %d",i,sum);
		
	}
	return 0;
}
