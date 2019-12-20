int main()
{
	int a[5],i,j,t;
	printf("\n ENTER THE ARRAY ELEMENTS:");
	for(i=0;i<5;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}printf("\n the ascending order:");
	for(i=0;i<5;i++)
	{printf("\n%d",a[i]);
	}
	return 0;
}
