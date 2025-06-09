#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number\n");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("31 Days");
    }
    else if(month==2)
    {
        printf("29 or 28 Days");
    }
    else
    {
        printf("30 Days");
    }
    printf("\n");
    return 0;
}