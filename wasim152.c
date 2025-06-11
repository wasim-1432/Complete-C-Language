#include<stdio.h>
int main()
{
    int arr[10];
    int i,sum=0,sum1=0;
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            sum1=sum1+arr[i];
        }
    }
    printf("Sum of Even Numbers=%d\n",sum);
    printf("Sum of Odd Numbers=%d",sum1);
    printf("\n");
    return 0;
}