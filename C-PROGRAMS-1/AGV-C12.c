#include <stdio.h>
int printnumbers(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    printnumbers(20);
    return 0;
}
