#include<stdio.h>
void Print_First_N_Number_of_Prime(int num);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    Print_First_N_Number_of_Prime(num);
    printf("\n");
    return 0;
}
void Print_First_N_Number_of_Prime(int num)
{
    int i=2;
    for(int n=1;n<=num;n++)
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