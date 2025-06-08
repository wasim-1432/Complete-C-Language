#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the principle amount,rate and time\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Interest is=%f",p*r*t/100.0);
    printf("\n");
    return 0;
}