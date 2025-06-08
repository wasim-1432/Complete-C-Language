#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Non positive number");
    }
    printf("\n");
    return 0;
}