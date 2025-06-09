#include<stdio.h>
int main()
{
    int n,a=-1,b=1,s=0,i=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
        i++;
    }
    printf("\n");
    return 0;
}