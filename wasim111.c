#include<stdio.h>
int Claculate_Factorial(int n);
int main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("Factorial of a given number=%d",Claculate_Factorial(n));
    printf("\n");
    return 0;
}
int Claculate_Factorial(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}