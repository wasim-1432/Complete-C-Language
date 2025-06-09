#include<stdio.h>
int main()
{
    int n,a=-1,b=1,s=0,i=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        s=a+b;
        a=b;
        b=s;
        i++;
    }
    printf("Nth term of fibonacci series=%d",s);
    printf("\n");
    return 0;
}