#include <stdio.h>
int main()
{
    int num,original_num,rev=0,digit;
    printf("enter the number");
    scanf("%d",&num);
    original_num=num;
    while(num!=0)
    {
        digit = num % 10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(original_num==rev)
    {
        printf("%d is a palindrome ",original_num);
    }
    else
        {
            printf("%d is not a palindrome",original_num);
        }
        return 0;

        }
