#include <stdio.h>
void PrimeNumber();
int main()
{
    PrimeNumber();    // argument is not passed
    return 0;
}
// return type is void meaning doesn't return any value
void PrimeNumber()
{
    int n,i,c=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if (c==1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}
