#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter any 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxvalue=arr[0];
    for(int i=1;i<10;i++)
    {
        if(maxvalue<arr[i])
        {
            maxvalue=arr[i];
        }
    }
    printf("Greatest Number is=%d",maxvalue);
    printf("\n");
    return 0;
}