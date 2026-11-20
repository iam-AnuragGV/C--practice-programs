#include <stdio.h>
int main()
{
    int num;
    int freq[10] = {0};
    printf("Enter the value of num");
    scanf("%d",&num);
    while(num > 0)
    {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    for(int i = 0;i < 10;i++)
        if(freq[i] > 0){
            printf("digit %d occurs %d times \n",i,freq[i]);

    }
    return 0;
}































