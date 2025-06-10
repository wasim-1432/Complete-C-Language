#include<stdio.h>
void Print_Prime_Number_Between_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Print_Prime_Number_Between_Two_Given_Numbers(a,b);
    printf("\n");
    return 0;
}
void Print_Prime_Number_Between_Two_Given_Numbers(int a,int b)
{
    int i=2;
    for(int n=a;n<=b;n++)
    {
        int i=2;
        while(i<=n)
        {
            if(n%i==0)
            {
                break;
            }
            i++;
        }
        if(n==i)
        {
            printf("%d ",n);
        }
    }
}