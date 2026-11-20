#include <stdio.h>
int main()
{
    char str[100];
    printf("enter a string:  ");
    scanf("%99s",&str);
    for(int i=0;str[i] != '\0'; i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}
