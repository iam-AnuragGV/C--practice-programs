#include <stdio.h>
int sum(int n1,int n2);
int main()
{
    int a,b,result;
    printf("Enter the numbers");
    scanf("%d %d ",&a,&b);
    result = sum(a,b);
    printf("Sum : %d ",result);
    return 0;
}
int sum(int n1,int n2)
{
    int add;
    add = n1 + n2;
    return add;

}

