#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[101];
    int vowels = 0;
    printf("enter a string");
    scanf("%100s",str);
    for(int i = 0;str[i] != '\0';i++)
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels +=1;
    }
    printf("number of vowels are %d\n ",vowels);
    return 0;
}
