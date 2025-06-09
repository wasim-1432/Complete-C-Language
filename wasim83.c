#include<stdio.h>
int main()
{
    for(int n=1;n<=100;n++)
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
            printf("%d ",n);
        }
    }
    printf("\n");
    return 0;
}