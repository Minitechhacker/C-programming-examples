int main()
{
	int a[5],i,*p;
	printf("\n enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		p=&a[0];
	printf("\n array elements are:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*p);
		*p++;
	}
	return 0;
}
