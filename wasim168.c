#include<stdio.h>
#include<stdlib.h>
void Merge_Two_Arrays(int arr1[],int arr2[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int *arr1=(int*)malloc(size*sizeof(int)),*arr2=(int*)malloc(size*sizeof(int));
    printf("Enter the first array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }
    Merge_Two_Arrays(arr1,arr2,size);
    printf("\n");
    return 0;
}
void Merge_Two_Arrays(int arr1[],int arr2[],int size)
{
    int i,j,*temp=(int*)malloc(2*size*sizeof(int)),k=0;
    for(i=0;i<size;i++)
    {
        temp[k++]=arr1[i];
    }
    for(i=0;i<size;i++)
    {
        temp[k++]=arr2[i];
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",temp[i]);
    }
}