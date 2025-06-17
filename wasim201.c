#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* Acronym_Name_From_A_Given_Name(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Acronym_Name_From_A_Given_Name(str));
    printf("\n");
    return 0;
}
char* Acronym_Name_From_A_Given_Name(char str[])
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
            temp[k++]=' ';
        }
        if(str[i]==' ')
        {
            i++;
            if(str[i]>='a' && str[i]<='z')
            {
                temp[k++]=str[i]-32;
            }
            else
            {
                temp[k++]=str[i];
            }
            temp[k++]=' ';
        }
    }
    while(str[i]!=' ')
    {
        i--;
    }
    i+=2;
    while(str[i]!='\0')
    {
        temp[k++]=str[i];
        i++;
    }
    temp[k]='\0';
    return temp;
}