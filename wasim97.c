#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        int k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d",k--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}