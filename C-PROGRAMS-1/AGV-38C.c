#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    int *p = &a;
    printf("the value of pointer pointing to %p\n",*p);
    printf("the value of a %p\n",(void*)p);
    printf("the pointers own address %p\n",(void*)p);
    return 0;
}
