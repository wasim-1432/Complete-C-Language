#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            printf("Index is=%d",i);
            return 0;
        }
    }
    printf("Not Found");
    printf("\n");
    return 0;
}