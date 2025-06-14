#include<stdio.h>
int main()
{
    int i,j,mat1[3][3];
    printf("Enter the elements of elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Transpose Matrix is :: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat1[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}