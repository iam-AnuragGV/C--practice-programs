#include <stdio.h>
//functions
void array()
{
    int n;
    printf("Enter The size of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements");
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
    int largest;
    largest = a[0];
    for(int j = 0;j < n;j++)
    {
        if(a[j] > a[0])
            largest = a[j];
    }
    printf("largest : %d",largest);
}
int main()
{
    array();
    return 0;
}
