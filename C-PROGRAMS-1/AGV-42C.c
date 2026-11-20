#include <stdio.h>
int main()
{
    int n,original_num,digit,sum = 0;
    printf("Enter the number \n");
    scanf("%d",&n);
    original_num = n;
    while(n>0)
    {
       digit = n % 10;
       sum = sum + (digit*digit*digit);
       n = n/10;
    }
    if(original_num == sum)
        printf("ARMSTRONG NUMBER");
    else
        printf("NOT A ARMSTRONG NUMBER");
    return 0;
}
