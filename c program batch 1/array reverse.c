#include<stdio.h>

void main()
{
	char a[]={'x','p','l','o','r','e'};
	char b[]={'a','e','i','o','u'};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(i=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				printf("%c",a[i]);
			
			}
		}
	}
	getch();
}
