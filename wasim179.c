#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    printf("Required answer si=%s",str);
    printf("\n");
    return 0;
}