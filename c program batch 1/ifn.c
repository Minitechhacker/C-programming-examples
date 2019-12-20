int main()
{
	int a,b,c;
	printf("\n ENTER THE VALUES:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{printf("\n A bigger no:");
		}
		else
		{printf("\n C is greater no:");
		}
	}
	else if(b>c)
	{printf("b is greater no:");
	}
	else
	{printf("\n C is bigger no:");
	}
	return 0;
}
