#include<stdio.h>
void main()
{
	char c;
	int a,b;
	printf("\nProgram to find whether the alphabet is vowel or consonants..!!");
	printf("\nenter the alphabet:");
	scanf("%c",&c);
	a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(a||b)
	{
		printf("entered alphabet is vowel");
	}
	else
	{
		printf("entered alphabet is consonant");
	}
	getch();
}
