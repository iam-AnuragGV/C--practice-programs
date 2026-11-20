#include <stdio.h>
int main()     // first pointer program
{
    int a;
    printf("enter an integer \n");
    scanf("%d",&a);
    int *p = &a;
    printf("original value %d :",*p);
    *p = *p + 10;
    printf("%d",*p);
    return 0;
}
