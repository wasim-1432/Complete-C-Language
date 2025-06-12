#include<stdio.h>
#include<stdlib.h>
void Swap_Two_Elements_Of_The_Given_Array(int arr[],int size,int a,int b);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a,b;
    printf("Enter any two indices\n");
    scanf("%d%d",&a,&b);
    int *arr=(int*)malloc(size*sizeof(int));
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Swap_Two_Elements_Of_The_Given_Array(arr,size,a,b);
    printf("\n");
    return 0;
}
void Swap_Two_Elements_Of_The_Given_Array(int arr[],int size,int a,int b)
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}