#include <stdio.h>
int countDigits(int n)
{
    if(n == 0)
        return 0;
    return 1 + countDigits(n/10);
}
int main()
{
    printf("Count digits: %d",countDigits(54321));
    return 0;
}

