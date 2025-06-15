#include<stdio.h>
#include<string.h>
int Compare_Two_String(char str[],char ptr[]);
int main()
{
    char str[30],ptr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter first string\n");
    fgets(ptr,30,stdin);
    ptr[strlen(ptr)-1]='\0';
    printf("required answer is=%d",Compare_Two_String(str,ptr));
    printf("\n");
    return 0;
}
int Compare_Two_String(char str[],char ptr[])
{
    return strcmp(str,ptr);
}