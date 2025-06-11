#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter any 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int minvalue=arr[0];
    for(int i=1;i<10;i++)
    {
        if(minvalue>arr[i])
        {
            minvalue=arr[i];
        }
    }
    printf("Smallest Number is=%d",minvalue);
    printf("\n");
    return 0;
}