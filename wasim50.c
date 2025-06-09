#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the traingle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Valid Traingle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    printf("\n");
    return 0;
}