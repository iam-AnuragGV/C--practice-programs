#include <stdio.h>
void add(int a,int b)
{
    printf("the sum of numbers is%d",a + b);
}
int main()
{
    int x,y;
    printf("enter  the numbers to be added");
    scanf("%d %d",&x,&y);
    add(x,y);
    return 0;
}
