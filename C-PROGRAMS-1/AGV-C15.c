#include <stdio.h>
char* greater(int a,int b)
{
    if(a>b)
     printf("a is greater");
    else if(b>a)
        printf("b is greater");
    else
        printf("both are equal");
}
int main()
{
    char* bigger=greater(10,20);
    printf("greatest of two numbers is :%s",bigger);
    return 0;
}
