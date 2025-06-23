#include<stdio.h>
void Swap_Two_Int_Variables_Using_Pointer(int* a,int* b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Swap_Two_Int_Variables_Using_Pointer(&a,&b);
    printf("\n");
    return 0;
}
void Swap_Two_Int_Variables_Using_Pointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("A=%d, B=%d",*a,*b);
}