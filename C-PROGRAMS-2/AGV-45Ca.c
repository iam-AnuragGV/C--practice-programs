#include <stdio.h>
//functions
void sum()
{
    int num1,num2,total;
    printf("Enter the numbers");
    scanf("%d %d",&num1,&num2);
    total = num1+num2;
    printf("%d",total);

}
int main()
{
    sum();
    return 0;
}
