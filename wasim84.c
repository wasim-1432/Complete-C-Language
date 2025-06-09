#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(n=n+1;;n++)
    {
        int j=2;
        while(j<=n)
        {
            if(n%j==0)
            {
                break;
            }
            j++;
        }
        if(j==n)
        {
            printf("Next Prime number =%d ",n);
            break;
        }
    }
    printf("\n");
    return 0;
}