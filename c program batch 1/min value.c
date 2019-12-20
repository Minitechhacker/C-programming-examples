int main()
{
	int a[5],i,min;
	printf("\n ENTER THE ARRAY ELEMENTS:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			min=0;
			
		}
	}
	printf("\n min value:%d",min);
	
}
