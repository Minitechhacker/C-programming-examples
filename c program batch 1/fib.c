#include <stdio.h>
int main()
{
    int i, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: \n");
    for (i = 1; i <= 10; i++) 
	{
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
