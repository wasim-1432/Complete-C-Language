#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        sum=sum+2*n-1;
        n--;
    }
    printf("Sum is=%d",sum);
    printf("\n");
    return 0;
}