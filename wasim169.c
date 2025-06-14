#include<stdio.h>
#include<stdlib.h>
void Count_Frequency_Of_Each_Elements(int arr[],int size);
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
    Count_Frequency_Of_Each_Elements(arr,size);
    printf("\n");
    return 0;
}
int* Sort(int arr[],int size)
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
void Count_Frequency_Of_Each_Elements(int arr[],int size)
{
    int i,count=1;
    arr=Sort(arr,size);
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            printf("%d-%d\n",arr[i],count);
            count=1;
        }
    }
}