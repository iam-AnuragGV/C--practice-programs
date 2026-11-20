#include <stdio.h>
int main()
{
    int n,num,sum=0;
    printf("enter how many numbers");
    scanf("%d",&n);

    for(int i=1;i <= n;i++)
    {
        printf("enter the number %d",i);
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("the sum of the numbers is %d",sum);
    return 0;

}
