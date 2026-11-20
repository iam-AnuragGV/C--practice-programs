
#include <stdio.h>
#include <limits.h>
int secondLargest(int arr[],int n)
{
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    if(n < 2){
        return -1;
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    if(secondlargest == INT_MIN)
        return -1;

    return secondlargest;
}
int main()
{
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers",n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = secondLargest(arr, n);
    printf("Output : %d\n",result);

    return 0;
}
