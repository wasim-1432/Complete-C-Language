#include<stdio.h>
int main()
{
    int arr1[10],arr2[10];
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<10;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}