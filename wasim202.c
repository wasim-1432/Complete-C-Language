#include<stdio.h>
#include<string.h>
char* cancatinate_Two_String(char str[],char ptr[]);
int main()
{
    char str[30],ptr[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(ptr,30,stdin);
    ptr[strlen(ptr)-1]='\0';
    printf("Required Answer is=%s",cancatinate_Two_String(str,ptr));
    printf("\n");
    return 0;
}
char* cancatinate_Two_String(char str[],char ptr[])
{
    int i;
    strcat(str,ptr);
    return str;
}