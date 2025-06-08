#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Leap Year");
    }
    else if(year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    printf("\n");
    return 0;
}