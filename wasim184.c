#include<stdio.h>
#include<string.h>
char* Reverse_Of_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Reverse_Of_A_Given_String(str));
    printf("\n");
    return 0;
}
char* Reverse_Of_A_Given_String(char str[])
{
    int i,l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    return str;
}