#include <stdio.h>
int add(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum = sum + i;
    }
        return sum;

}
int main()
{
    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    result = add(n);
    printf("the sum of the numbers is%d  ",  result);
}
