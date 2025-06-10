#include<stdio.h>
int Arrangement(int n,int r);
int main()
{
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    printf("Required answer is :: %d",Arrangement(n,r));
    printf("\n");
    return 0;
}
int Factorial(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
int Arrangement(int n,int r)
{
    return Factorial(n)/Factorial(n-r);
}