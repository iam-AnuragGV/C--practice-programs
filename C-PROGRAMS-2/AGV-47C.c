#include <stdio.h>
int findMax(int arr[],int n)
{
    int largest;
    largest = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int a[101],j;
    printf("enter the number of array elements in the array");
    scanf("%d",&j);
    printf("enter the array elements");
    for(int i = 0; i < j; i++)
    {
    scanf("%d",&a[i]);
    }
    int result;
    result = findMax(a,j);
    printf("Largest element is %d",result);
    return 0;

}
