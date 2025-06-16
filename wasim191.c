#include<stdio.h>
#include<string.h>
char* Swap_Two_Words_In_A_Given_String_Between_Specified_Index(char str[],int a,int b);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int a,b;
    printf("Enter any two index\n");
    scanf("%d%d",&a,&b);
    printf("Required Answer is=%s",Swap_Two_Words_In_A_Given_String_Between_Specified_Index(str,a,b));
    printf("\n");
    return 0;
}
char* Swap_Two_Words_In_A_Given_String_Between_Specified_Index(char str[],int a,int b)
{
    char temp=str[a];
    str[a]=str[b];
    str[b]=temp;
    return str;
}