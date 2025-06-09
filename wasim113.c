#include<stdio.h>
int Check_Whether_A_Given_Number_Is_Even_or_Odd(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(Check_Whether_A_Given_Number_Is_Even_or_Odd(n))
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd number");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_Number_Is_Even_or_Odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    return 0;
}