#include<stdio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    printf("Enter Your five sunjects marks\n");
    scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
    if(mark1<33 || mark2<33 || mark3<33 || mark4<33 || mark5<33)
    {
        printf("Sorry You are Failed...!");
    }
    else
    {
        printf("You are Passed...!");
    }
    printf("\n");
    return 0;
}