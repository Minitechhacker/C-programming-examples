int main()
{
	int a,b,c,*p,*q;
	a=10;
	b=15;
	p=&a;
	q=&b;
	c=*p-*q;
	printf("\n %d",a);
	printf("\n%d",b);
	printf("\n%d",&a);
	printf("\n%d",&b);	
	printf("\n%d",c);
	return 0;}
