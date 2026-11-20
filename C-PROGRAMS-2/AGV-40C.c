#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements \n");
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
    printf("the array elements are: \n");
    for(int i = 0;i < n;i++)
        printf("%d ",a[i]);

}
