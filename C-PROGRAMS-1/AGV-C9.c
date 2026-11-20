#include <stdio.h>
int square(int a)
{
   return a*a;
}
int main()
{
    int result;
    result = square(5);
    printf("square %d", result);
    return 0;
}
