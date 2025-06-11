#include<stdio.h>
int Culculate_Sum_Of_Digits_Of_Given_Number(int n);
int main()
{
    int n;
    printf("Enter ny number\n");
    scanf("%d",&n);
    printf("Sum of natural numbers is=%d",Culculate_Sum_Of_Digits_Of_Given_Number(n));
    printf("\n");
    return 0;
}
int Culculate_Sum_Of_Digits_Of_Given_Number(int n)
{
    if(n)
    {
        return (n%10)+Culculate_Sum_Of_Digits_Of_Given_Number(n/10);
    }
}