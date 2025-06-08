#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n/2*2==n)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    printf("\n");
    return 0;
}