#include <stdio.h>
int main()
{
    int n,topper_index=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int rollnumber[n];
    float marks[n];


    for(int i=0;i<n;i++)
    {
        printf("student details");
        printf("roll number");
        scanf("%d",&rollnumber[i]);
        printf("marks");
        scanf("&f",&marks[i]);
    }
    for(int i = 0;i<n;i++)
    {
        if(marks[i]>marks[topper_index])
        {


            topper_index = i;
        }
    }
    printf("topper of the class is%d",rollnumber[topper_index]);
return 0;


}
