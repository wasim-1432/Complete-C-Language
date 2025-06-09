#include<stdio.h>
int main()
{
    int i=2,a,b,s=1;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    while(a!=1 || b!=1)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=a/i;
            s=s*i;
            continue;
        }
        else if(a%i==0)
        {
            a=a/i;
            s=s*i;
            continue;
        }
        else if(b%i==0)
        {
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    printf("LCM is=%d",s);
    printf("\n");
    return 0;
}