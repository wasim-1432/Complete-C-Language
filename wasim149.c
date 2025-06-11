#include<stdio.h>
int Calculate_Power(int n,int p);
int main()
{
    int n,p;
    printf("Enter any number and power\n");
    scanf("%d%d",&n,&p);
    printf("Required Answer is=%d",Calculate_Power(n,p));
    printf("\n");
    return 0;
}
int Calculate_Power(int n,int p)
{
    if(p!=1)
    {
        return n*Calculate_Power(n,p-1);
    }
}