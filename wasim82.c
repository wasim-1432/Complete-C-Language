#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++)
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