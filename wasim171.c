#include<stdio.h>
int main()
{
    int i,j,k,mat1[3][3],mat2[3][3],mat3[3][3];
    printf("Enter the elements of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            mat3[i][j]=sum;
        }
    }
    printf("Required Answer :: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}