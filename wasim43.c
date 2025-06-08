#include<stdio.h>
int main()
{
    float sp,cp;
    printf("Enter the selling and cost price\n");
    scanf("%f%f",&sp,&cp);
    if(sp>cp)
    {
        printf("Profit percentage is=%f",(sp-cp)/cp*100);
    }
    else
    {
        printf("Loss percentage is=%f",(cp-sp)/cp*100);
    }
    printf("\n");
    return 0;
}