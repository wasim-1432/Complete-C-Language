#include<stdio.h>
#include<stdlib.h>
void Sort_The_Given_Array(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int)),i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Sort_The_Given_Array(arr,size);
    printf("\n");
    return 0;
}
void Sort_The_Given_Array(int arr[],int size)
{
    int round,i;
    for(round=0;round<size-1;round++)
    {
        for(i=0;i<size-round-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}