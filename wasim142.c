#include<stdio.h>
int Culculate_Sum_Of_First_N_Even_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter ny number\n");
    scanf("%d",&n);
    printf("Sum of natural numbers is=%d",Culculate_Sum_Of_First_N_Even_Natural_Numbers(n));
    printf("\n");
    return 0;
}
int Culculate_Sum_Of_First_N_Even_Natural_Numbers(int n)
{
    if(n)
    {
        return (2*n)+Culculate_Sum_Of_First_N_Even_Natural_Numbers(n-1);
    }
}