#include<stdio.h>
int Reverse_Of_A_Given_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Reverse_Of_A_Given_Number(n);
    printf("\n");
    return 0;
}
int Reverse_Of_A_Given_Number(int n)
{
    if(n!=0)
    {
        printf("%d",n%10);
        Reverse_Of_A_Given_Number(n/10);
    }
}