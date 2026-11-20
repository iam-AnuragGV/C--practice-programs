#include <stdio.h>
void pattern(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    pattern(10);
    return 0;
}
