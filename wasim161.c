#include<stdio.h>
#include<stdlib.h>
int Find_Greatest_Element(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Greatest Element of the given array=%d",Find_Greatest_Element(arr,size));
    printf("\n");
    return 0;
}
int Find_Greatest_Element(int arr[],int size)
{
    int i,maxValue=arr[0];
    for(i=1;i<size;i++)
    {
        if(maxValue<arr[i])
        {
            maxValue=arr[i];
        }
    }
    return maxValue;
}