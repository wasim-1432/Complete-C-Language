#include<stdio.h>
void Decimal_To_Binary(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Decimal_To_Binary(n);
    printf("\n");
    return 0;
}
void Decimal_To_Binary(int n)
{
    if(n>=1)
    {
        Decimal_To_Binary(n/2);
        printf("%d",n%2);
    }
}