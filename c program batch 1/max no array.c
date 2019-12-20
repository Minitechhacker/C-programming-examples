int main()
{
	int a[5],i,max=0;
	printf("\n enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n max no is:%d",max);
	return 0;
}

