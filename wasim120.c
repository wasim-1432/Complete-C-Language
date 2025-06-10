#include<stdio.h>
void Prime_Factor(int num);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    Prime_Factor(num);
    printf("\n");
    return 0;
}
int Check_Prime(int n)
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
        return 1;
    }
    return 0;
}
void Prime_Factor(int num)
{
    int i=2;
    while(i<=num)
    {
        if(num%i==0)
        {
            num=num/i;
            if(Check_Prime(i))
            {
                printf("%d ",i);
            }
            continue;
        }
        i++;
    }
}