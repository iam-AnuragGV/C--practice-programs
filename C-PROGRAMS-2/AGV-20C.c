#include <stdio.h>
int main()
{
    int array[5],sum = 0;
    printf("enter the array elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",array[i]);
        sum = sum + array[i];
    }
    printf("sum is: %d",sum);
    return 0;
}
