#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Cehck_Whether_A_Given_Two_String_Is_Anagram_Or_Not(char str[],char ptr[]);
int main()
{
    char str[30],ptr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(ptr,30,stdin);
    ptr[strlen(ptr)-1]='\0';
    if(Cehck_Whether_A_Given_Two_String_Is_Anagram_Or_Not(str,ptr))
    {
        printf("Anagaram Strings");
    }
    else
    {
        printf("Not Anagaram Strings");
    }
    printf("\n");
    return 0;
}
int Cehck_Whether_A_Given_Two_String_Is_Anagram_Or_Not(char str[],char ptr[])
{
    int i;
    int l1,l2;
    l1=strlen(str);
    l2=strlen(ptr);
    if(l1!=l2)
    {
        return 0;
    }
    int count[26]={0};
    for(i=0;str[i];i++)
    {
        count[str[i]-'0']++;
        count[ptr[i]-'0']--;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}