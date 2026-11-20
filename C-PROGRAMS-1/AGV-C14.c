#include <stdio.h>
int cube(int a)
{
    return a*a*a;
}
int main()
{
    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    result = cube(n);
    printf("%d",result);
    return 0;
}
