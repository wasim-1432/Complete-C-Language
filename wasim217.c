#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Swap_Two_Given_String(char* str,char* ptr);
int main()
{
    char str[30],ptr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second strig\n");
    fgets(ptr,30,stdin);
    ptr[strlen(ptr)-1]='\0';
    Swap_Two_Given_String(str,ptr);
    printf("\n");
    return 0;
}
void Swap_Two_Given_String(char* str,char* ptr)
{
    int i,len=strlen(str),k=0;
    char* temp=(char*)malloc(len*len*sizeof(char));
    strcpy(temp,str);
    strcpy(str,ptr);
    strcpy(ptr,temp);
    printf("First String=%s\n",str);
    printf("Second String=%s",ptr);
}