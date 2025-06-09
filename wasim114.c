#include<stdio.h>
void print_First_N_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    print_First_N_Natural_Numbers(n);
    printf("\n");
    return 0;
}
void print_First_N_Natural_Numbers(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}