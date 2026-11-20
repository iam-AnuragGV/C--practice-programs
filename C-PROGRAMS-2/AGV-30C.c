#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    char temp;
    int j;
    printf("enter a string");
    scanf("%s",str);
    j = strlen(str) - 1;
    for(int i = 0;i<j;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("reversed string %s",str);
    return 0;
}
