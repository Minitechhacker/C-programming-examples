int main()
{
	int a[5],i,sum=0;
	printf("enter the array element");
	for(i=0;i<5;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
printf("\n sum is :%d",sum);
return 0;
}
