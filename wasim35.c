#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisivle by 5");
    }
    printf("\n");
    return 0;
}