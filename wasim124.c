#include<stdio.h>
int Print_Next_Prime_Number(int num);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("Next prime number is=%d",Print_Next_Prime_Number(num));
    printf("\n");
    return 0;
}
int Print_Next_Prime_Number(int num)
{
    int i=2;
    for(int n=num+1;;n++)
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
            return n;
        }
    }
}