#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    int i=2,s=1;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
        }
        i++;
    }
    printf("HCF is=%d",s);
    printf("\n");
    return 0;
}