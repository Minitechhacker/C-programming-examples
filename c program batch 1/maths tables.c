int main()
{
	int i,n,r;
	printf("\n enter the i value:");
	scanf("%d",&i);
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		r=i*n;
		printf("\n%d*%d=%d",i,n,r);
	}
	return 0;
}
