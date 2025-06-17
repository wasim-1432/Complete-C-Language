#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* Make_First_Word_In_A_Given_String_Is_Capital(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Make_First_Word_In_A_Given_String_Is_Capital(str));
    printf("\n");
    return 0;
}
char* Make_First_Word_In_A_Given_String_Is_Capital(char str[])
{
    int i,l=strlen(str),k=0;
    char* temp=(char*)malloc((l+1)*sizeof(char));
    for(i=0;str[i];i++)
    {
        if(i==0)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                temp[k++]=str[i]-32;
            }
            else
            {
                temp[k++]=str[i];
            }
            continue;
        }
        if(str[i]==' ')
        {
            temp[k++]=' ';
            i++;
            if(str[i]>='a' && str[i]<='z')
            {
                temp[k++]=str[i]-32;
            }
            else
            {
                temp[k++]=str[i];
            }
        }
        else
        {
            temp[k++]=str[i];
        }
    }
    temp[k]='\0';
    return temp;
}