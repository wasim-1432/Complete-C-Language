#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0)
    {
        printf("Two distinct real roots");
    }
    else if(d<0)
    {
        printf("Two complex conjugate roots");
    }
    else if(d==0)
    {
        printf("Two equal real roots ");
    }
    printf("\n");
    return 0;
}