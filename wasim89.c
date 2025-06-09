#include<stdio.h>
int main()
{
    int n,a=-1,b=1,s=0,i=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    int found=0;
    while(s<=n)
    {
        s=a+b;
        if(s==n)
        {
            found=1;
            printf("Yes given number is a term of fibonacci series.");
            break;
        }
        a=b;
        b=s;
        i++;
    }
    if(found==0)
    {
        printf("Given number is not a term of fibonacci series.");
    }
    printf("\n");
    return 0;
}