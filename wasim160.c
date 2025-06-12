#include<stdio.h>
#include<stdlib.h>
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
    int maxValue=arr[0];
    for(int i=1;i<size;i++)
    {
        if(maxValue<arr[i])
        {
            maxValue=arr[i];
        }
    }
    printf("Greatest Element=%d",maxValue);
    printf("\n");
    return 0;
}