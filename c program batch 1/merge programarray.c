int main()
{
	int a[5],b[5],c[5],i,j=5;
	printf("\n enter the elements :");			
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
		scanf("\n %d",&b[i]);
		c[i]=a[i];
		
	}
	for(i=0;i<5;i++)
	{
		c[j]=b[i];
		j++;
		
	}
	for(i=0;i<10;i++)
	{
		printf("\n%d",c[i]);
		
	}
	return 0;
}
