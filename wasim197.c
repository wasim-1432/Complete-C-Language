#include<stdio.h>
#include<string.h>
int Case_Insensitive_Comparision(char str[],char ptr[]);
int main()
{
    char str[30],ptr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter secnd string\n");
    fgets(ptr,30,stdin);
    ptr[strlen(ptr)-1]='\0';
    if(Case_Insensitive_Comparision(str,ptr))
    {
        printf("Case Insensitive");
    }
    else
    {
        printf("Not Case Insensitive");
    }
    printf("\n");
    return 0;
}
int Case_Insensitive_Comparision(char str[],char ptr[])
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ptr[i] || str[i]==ptr[i]-32 || str[i]-32==ptr[i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}