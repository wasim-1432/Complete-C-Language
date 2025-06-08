#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number\n");
    scanf("%d",&a);
    printf("Required answer is=%d",(a%10*10+a/100)*10+a/10%10);
    printf("\n");
    return 0;
}