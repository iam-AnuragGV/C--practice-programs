#include <stdio.h>
int main()
{
   int n,largest,second_largest;
   printf("enter the size of the array elements");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array elements");
   for(int i = 0;i < n;i++)
   scanf("%d",&a[i]);
   largest = a[0];
   second_largest = -1;
   for(int j = 0;j<n;j++)
   {
       if(a[j] > largest)
       {
           second_largest = largest;
           largest = a[j];
       }
       else if(a[j] > second_largest && a[j] != largest)
        second_largest = a[j];

   }
   printf("largest = %d\n",largest);
   printf("second largest = %d\n",second_largest);
   return 0;
}
