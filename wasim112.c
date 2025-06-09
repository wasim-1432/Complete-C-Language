#include<stdio.h>
float Calculate_Simple_Interest(int p,int r,int t);
int main()
{
    int p,r,t;
    printf("Enter yhe principle amount,rate and time(in years)\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest=%f",Calculate_Simple_Interest(p,r,t));
    printf("\n");
    return 0;
}
float Calculate_Simple_Interest(int p,int r,int t)
{
    return p*r*t/100.0;
}