#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    char ptr[30];
    int i;
    for(i=0;str[i];i++)
    {
        ptr[i]=str[i];
    }
    ptr[i]='\0';
    printf("Required answer=%s",ptr);
    printf("\n");
    return 0;
}