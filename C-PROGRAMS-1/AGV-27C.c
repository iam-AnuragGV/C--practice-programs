#include <stdio.h>
int main()
{
    int count = 0;char str[100];
    printf("enter the string:  ");
    scanf("%99s",str);
    for(int i = 0;str[i] != '\0';i++)
    {
        count +=1;
    }
    printf("count is %d",count);
    return 0;
    }
