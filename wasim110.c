#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        char k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                {
                    k--;
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}