#include<stdio.h>
#include<string.h>
void Store_String_In_2D_Char_Array(char str[][30],int n);
int main()
{
    int n,i;
    char string[100][30];
    printf("Enter number of strings\n");
    scanf("%d",&n);
    Store_String_In_2D_Char_Array(string,n);
    printf("\n");
    return 0;
}
void Store_String_In_2D_Char_Array(char str[][30],int n)
{
    int i,l;
    printf("Enter any string\n");
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
}