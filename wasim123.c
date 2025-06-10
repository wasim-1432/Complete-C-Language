#include<stdio.h>
int Check_Given_Number_Is_Prime_Or_Not(int num);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(Check_Given_Number_Is_Prime_Or_Not(num))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    printf("\n");
    return 0;
}
int Check_Given_Number_Is_Prime_Or_Not(int num)
{
    int i=2;
    while(i<=num)
    {
        if(num%i==0)
        {
            break;
        }
        i++;
    }
    if(num==i)
    {
        return 1;
    }
    return 0;
}