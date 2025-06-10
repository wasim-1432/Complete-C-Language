#include<stdio.h>
int Check_Given_Number_Contains_Given_Digit_Or_Not(int num,int digit);
int main()
{
    int num,digit;
    printf("Enter any number and digit\n");
    scanf("%d%d",&num,&digit);
    if(Check_Given_Number_Contains_Given_Digit_Or_Not(num,digit))
    {
        printf("Yes Present...!");
    }
    else
    {
        printf("Not Present...!");
    }
    printf("\n");
    return 0;
}
int Check_Given_Number_Contains_Given_Digit_Or_Not(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
        {
            return 1;
        }
        num/=10;
    }
    return 0;
}