#include<stdio.h>
void Print_Fibonacci_Series(int a,int b,int count);
int main()
{
    int a=0,b=1,count;
    printf("Enter any number\n");
    scanf("%d",&count);
    Print_Fibonacci_Series(a,b,count);
    printf("\n");
    return 0;
}
void Print_Fibonacci_Series(int a,int b,int count)
{
    if(count==0)
    {
        return;
    }
    int next=a+b;
    printf("%d ",next);
    a=b;
    Print_Fibonacci_Series(a,next,count-1);
}