#include<stdio.h>
#include<string.h>
#include<ctype.h>
int Check_Given_String_Is_Alphanumeric_Or_Not(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Given_String_Is_Alphanumeric_Or_Not(str))
    {
        printf("Alphanumeric");
    }
    else
    {
        printf("Not Alphanumeric");
    }
    printf("\n");
    return 0;
}
int Check_Given_String_Is_Alphanumeric_Or_Not(char str[])
{
    int i,alpha=0,digit=0;
    for(i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            alpha=1;
        }
        else if(isdigit(str[i]))
        {
            digit=1;
        }
    }
    if(alpha && digit)
    {
        return 1;
    }
    return 0;
}