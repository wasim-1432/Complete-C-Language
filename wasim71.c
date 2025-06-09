#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d=%d\n",n,i,n*i);
        i++;
    }
    printf("\n");
    return 0;
}