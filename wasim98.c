#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",k++);
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