#include <stdio.h>
int main()
{
    int a,digit,sum = 0,originalnum,rev = 0;
    printf("enter a number: ");
    scanf("%d",&a);
    originalnum = a;
    while(a>0)
    {
    digit = a % 10;
    sum = sum + digit;
    rev = (rev*10) + digit;
    a = a / 10;
    }
    printf("sum of digits are: %d\n",sum);
    if(originalnum == rev)
    {
        printf("palindrome %d",originalnum);
    }
    else
    {
        printf("not a palindrome %d",originalnum);
    }
    return 0;
}
