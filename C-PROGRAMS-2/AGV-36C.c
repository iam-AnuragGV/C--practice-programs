#include <stdio.h>
int main()
{
    int a,b,count = 0,isprime;
    printf("enter the starting value and ending value  ");
    scanf("%d %d",&a,&b);
    if(a < 2)
    {
        a = 2;
    }
    for(int i = a;i<=b;i++)
    {
        isprime = 1;
        for(int j = 2;j<= i/2;j++)
        {
            if(i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime == 1)
        {
            printf("%d\t",i);
            count++;
        }
    }
    printf("the number of prime numbers are: %d",count);
}

