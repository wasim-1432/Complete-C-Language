#include<stdio.h>
void Print_Pascal_S_Triangle(int n);
int main()
{
    int n;
    printf("Enter the rows number\n");
    scanf("%d",&n);
    Print_Pascal_S_Triangle(n);
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
void Print_Pascal_S_Triangle(int n)
{
    int i,j,k,t,s;
    for(i=1;i<=n;i++)
    {
        k=1;
        s=0;
        t=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {
                printf("%d",Factorial(i-t)/Factorial(i-t-s)/Factorial(s));
                s++;
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}