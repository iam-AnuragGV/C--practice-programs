#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    char rev[101];
    printf("enter a string");
    scanf("%s",str);
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(str,rev) == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
