#include<stdio.h>
void Print_N_Natural_Even_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_N_Natural_Even_Numbers(n);
    printf("\n");
    return 0;
}
void Print_N_Natural_Even_Numbers(int n)
{
    if(n!=0)
    {
        Print_N_Natural_Even_Numbers(n-1);
        printf("%d ",2*n);
    }
}