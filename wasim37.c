#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n & 1)
    {
        printf("Odd number");
    }
    else
    {
        printf("Even number");
    }
    printf("\n");
    return 0;
}