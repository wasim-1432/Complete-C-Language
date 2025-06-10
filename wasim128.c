#include<stdio.h>
#include<math.h>
void Print_Armstrong_Number_Between_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any number\n");
    scanf("%d%d",&a,&b);
    Print_Armstrong_Number_Between_Two_Given_Numbers(a,b);
    printf("\n");
    return 0;
}
void Print_Armstrong_Number_Between_Two_Given_Numbers(int a,int b)
{
    for(int n=a;n<=b;n++)
    {
        int count=0,t=n, sum=0,r;
        while (t)
        {
            count++;
            t/=10;
        }
        int s=n;
        while (s)
        {
            r=s%10;
            sum=sum+(int)pow(r, count); 
            s/=10;
        }
        if (n==sum)
            printf("%d ",n);
    }
}