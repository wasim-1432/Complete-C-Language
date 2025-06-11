#include<stdio.h>
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("HCF is=%d",Calculate_HCF_Of_Given_Two_Numbers(a,b));
    printf("\n");
    return 0;
}
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    Calculate_HCF_Of_Given_Two_Numbers(b,a%b);
}