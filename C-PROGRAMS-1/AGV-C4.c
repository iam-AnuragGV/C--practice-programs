#include <stdio.h>
int main()
{
    int n,isprime = 1;
    printf("enter the number");
    scanf("%d",&n);
    if(n <=1)
    {
        isprime = 0;
    }
    else
    {
        for(int i = 2;i <= n/2;i++)
        {
            if(n % i == 0)
            {
                isprime = 0;
            }

        }
        if(isprime == 0)
        {
            printf("it is not a prime number%d",n);
        }
        else
        {
            printf("it is prime number%d",n);
        }

    }
    return 0;

}

