#include<stdio.h>
#include<string.h>
char* Convert_Lowercase_Alphabet(char str[]);
int main()
{
    char str[30];
    printf("Enter any strong\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required answer is=%s",Convert_Lowercase_Alphabet(str));
    printf("\n");
    return 0;
}
char* Convert_Lowercase_Alphabet(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    return str;
}