#include<stdio.h>
#include<stdlib.h>
int Find_First_Occurrenc_Of_The_Given_Array(int arr[],int size);
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
    printf("First Occurrence=%d",Find_First_Occurrenc_Of_The_Given_Array(arr,size));
    printf("\n");
    return 0;
}
int Find_First_Occurrenc_Of_The_Given_Array(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                return i;
            }
        }
    }
    return -1;
}