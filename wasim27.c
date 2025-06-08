#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number\n");
    scanf("%d",&a);
    printf("Sum of digits is=%d",a%10+a/10%10+a/100);
    printf("\n");
    return 0;
}