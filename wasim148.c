#include<stdio.h>
int Count_Digit_In_A_Given_Number(int n);
int main()
{
    int n;
    printf("Enter any two numbers\n");
    scanf("%d",&n);
    printf("Total Digit=%d",Count_Digit_In_A_Given_Number(n));
    printf("\n");
    return 0;
}
int Count_Digit_In_A_Given_Number(int n)
{
    if(n)
    {
        return Count_Digit_In_A_Given_Number(n/10)+1;
    }
}