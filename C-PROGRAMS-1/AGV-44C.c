#include <stdio.h>
int main()
{
    char str[101],ch;
    scanf("%s \n %c",str,&ch);
    int count = 0;
    if(ch >='A' && ch <='Z')
        ch = ch+32;
    for(int i=0;str[i] !='\0';i++)
    {
        char c = str[i];
        if(c >='A' && c <='Z')
        c = c+32;
        if(c == ch)
            count++;
    }
    printf("count is %d",count);
    return 0;
}
