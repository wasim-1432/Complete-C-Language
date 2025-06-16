#include<stdio.h>
#include<string.h>
int Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Whether_A_Given_String_Is_Palindrome_Or_Not(str)==0)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not Plindrome string");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_String_Is_Palindrome_Or_Not(char str[])
{
    int i,l=strlen(str);
    char ptr[30];
    strcpy(ptr,str);
    for(i=0;i<l/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    return strcmp(str,ptr);
}