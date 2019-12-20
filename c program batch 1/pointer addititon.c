int main()
{
	int a,b,c,*p,*q;
	a=10;
	b=15;
	p=&a;
	q=&b;
	c=*p+*q;	
	printf("\n the addition%d",c);
	c=*p-*q;
	printf("\nminus %d",c);
	c=*p**q;
	printf("\n multi %d",c);
	c=*p%*q;
	printf("\n division%d",c);
	return 0;

	
}
