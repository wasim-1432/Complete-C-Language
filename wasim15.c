#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the selling and cost price of the banana\n");
    scanf("%d%d",&sp,&cp);
    printf("Profit or Loss =%f",(sp-cp)/12.0*25);
    printf("\n");
    return 0;
}