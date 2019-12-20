int main()
{
	int a[2],b[2],i;
	printf("\n enter the element");
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<2;i++)
		{
		scanf("%d",&b[i]);	
	}
	for(i=0;i<2;i++)
	{
    a[i] = a[i] + b[i];
    b[i] = a[i] - b[i]; 
    a[i] = a[i] - b[i];
}
	for(i=0;i<2;i++)
	{
	printf("\n%d",a[i]);}
	for(i=0;i<2;i++)
	{
		printf("\n%d",b[i]);
	}
	return 0;
}
