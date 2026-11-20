#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char s[101];
    int v = 0,c = 0;
    printf("enter the string\n");
    scanf("%100[^\n]",s);
    for(int i = 0;s[i] != 0;i++)
    {
        if(isalpha(s[i]))
        {
            if(tolower(s[i]) == 'a' ||tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                v++;
            else
                c++;
            if(isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);

        }
    }
        printf("converted string \n %s",s);
        printf("vowels %d and consonents %d",v,c);

    return 0;
}

