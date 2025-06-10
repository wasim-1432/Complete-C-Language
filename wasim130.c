#include<stdio.h>
void Print_N_Natural_Numbers_In_Reverse_Order(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_N_Natural_Numbers_In_Reverse_Order(n);
    printf("\n");
    return 0;
}
void Print_N_Natural_Numbers_In_Reverse_Order(int n)
{
    if(n!=0)
    {
        printf("%d ",n);
        Print_N_Natural_Numbers_In_Reverse_Order(n-1);
    }
}