#include<stdio.h>
#include<string.h>
char* Convert_A_Given_String_Into_lowecase(char* str);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Convert_A_Given_String_Into_lowecase(str));
    printf("\n");
    return 0;
}
char* Convert_A_Given_String_Into_lowecase(char* str)
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    return str;
}