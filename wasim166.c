#include<stdio.h>
#include<stdlib.h>
int Count_Duplicates_From_The_Given_Array(int arr[],int size);
int* Sort(int* arr,int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Total Duplicate Element=%d",Count_Duplicates_From_The_Given_Array(arr,size));
    printf("\n");
    return 0;
}
int Count_Duplicates_From_The_Given_Array(int arr[],int size)
{
    int i,j,count=0;
    arr=Sort(arr,size);
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    return count;
}
int* Sort(int* arr,int size)
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
    return arr;
}