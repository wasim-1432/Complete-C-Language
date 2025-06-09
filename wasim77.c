#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial is=%d",fact);
    printf("\n");
    return 0;
}