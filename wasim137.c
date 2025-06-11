#include<stdio.h>
void Decimal_To_Octal(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Decimal_To_Octal(n);
    printf("\n");
    return 0;
}
void Decimal_To_Octal(int n)
{
    if(n>=1)
    {
        Decimal_To_Octal(n/8);
        printf("%d",n%8);
    }
}