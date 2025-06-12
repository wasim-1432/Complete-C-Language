#include<stdio.h>
#include<stdlib.h>
void Print_Unique_Elements(int* arr,int size);
int* Sort(int* arr,int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    int i;
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Print_Unique_Elements(arr,size);
    printf("\n");
    return 0;
}
void Print_Unique_Elements(int* arr,int size)
{
    int i,k=0,*temp=(int*)malloc(size*sizeof(int));
    arr=Sort(arr,size);
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else
        {
            temp[k++]=arr[i];
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",temp[i]);
    }
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