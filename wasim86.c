#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    printf("Coprime is=%d",a);
    printf("\n");
    return 0;
}