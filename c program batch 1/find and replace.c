int main()
{
	int a[5],k,j,i;
	printf("\n enter the array elements:");
	for(k=0;k<5;k++)
	{
	scanf("\n%d",&a[i]);
	}
	printf("\n enter the element to tbe found:");
	scanf("\n%d",&k);
	
	printf("\n enter the replace element:");
	scanf("\n %d",&j);
	for(k=0;k<5;k++)
	{
		if(a[i]==k)
		   a[i]=j;

	}
	printf("\n the updated array:");
	for(k=0;k<5;k++)
	{
		printf("\n the updated array is%d",a[i]);
	}
	return 0;
}
