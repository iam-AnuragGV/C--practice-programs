#include <stdio.h>
int isprime(int a)
{
    if(a < 2)
    {
        return 0;
    }
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int a;
    printf("enter a number");

    scanf("%d",&a);
    if(isprime(a))
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
    return 0;

}
