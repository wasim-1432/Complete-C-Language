#include<stdio.h>
#include<stdlib.h>
int Find_Smallest_Number_In_The_Given_Array(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int i,*arr=(int*)malloc(size*sizeof(int));
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Smallest Number is=%d",Find_Smallest_Number_In_The_Given_Array(arr,size));
    printf("\n");
    return 0;
}
int Find_Smallest_Number_In_The_Given_Array(int arr[],int size)
{
    int i,minValue=arr[0];
    for(i=0;i<size;i++)
    {
        if(minValue>arr[i])
        {
            minValue=arr[i];
        }
    }
    return minValue;
}