#include <stdio.h>
int main()
{
    int array[5];
    printf("enter the array elements");
    for(int i=0;i<5;i++)
    {
      scanf("%d",&array[i]);
    }
    printf("you entered\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
