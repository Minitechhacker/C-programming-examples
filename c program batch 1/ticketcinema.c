int mian()
{
	int pizza,puff,cooldrinks,totalprice;
printf("\n ENTER THE PIZZA NO:");	
	scanf("%d",&pizza);
	printf("\n ENTER THE PUFF NO:");
	scanf("%d",&puff);
	printf("\n ENTER THE COOLDRINKS:");
	scanf("%d",&cooldrinks);
	totalprice=pizza*100+puff*20+cooldrinks*30;
	printf("\n TOTALPRICE IS:%d",totalprice);
	printf("\n THANK YOU VISIT AGAIN");
	return 0;
}
