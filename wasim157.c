#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter any 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int round,i;
    for(round=0;round<10-1;round++)
    {
        for(i=0;i<10-round-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("Second Largest Element=%d",arr[1]);
    printf("\n");
    return 0;
}