#include<stdio.h>
int main()
{
    int i,j,k,t;
    for(i=1;i<=5;i++)
    {
        k=1;
        t=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                printf("%d",t);
                j<5?t++:t--;
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
                if(j==5)
                {
                    t--;
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}