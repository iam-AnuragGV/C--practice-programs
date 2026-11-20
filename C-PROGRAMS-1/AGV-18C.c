#include <stdio.h>
void multiplication(int a)
{
    for(int i=1;i<=10;i++)
        printf("%d x %d = %d",a,i,a*i);
}
int main()
{
    int num = 5;
    multiplication(num);
    return 0;
}
