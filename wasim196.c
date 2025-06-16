#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* Reverse_A_String_from_Word_Wise(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Reverse_A_String_from_Word_Wise(str));
    printf("\n");
    return 0;
}
char* Reverse_A_String_from_Word_Wise(char str[])
{
    int i,l=strlen(str),k=0,j;
    char* temp=(char*)malloc((l+1)*sizeof(char));
    i=l-1;
    while(i>=0)
    {
        while(i>=0 && str[i]==' ')
        {
            i--;
        }
        int end=i;
        while(i>=0 && str[i]!=' ')
        {
            i--;
        }
        int start=i+1;
        for(j=start;j<=end;j++)
        {
            temp[k++]=str[j];
        }
        temp[k++]=' ';
    }
    temp[k]='\0';
    return temp;
}