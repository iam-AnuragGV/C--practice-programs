#include <stdio.h>
int main()
{
    int sum=0,n,digit;
    scanf("%d",&n);
  while(n!=0)
  {
      digit = n % 10;
      sum = sum + digit;
      n = n/10;
  }
  printf("the sum is %d",sum);
  return 0;

  }
