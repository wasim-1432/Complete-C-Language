#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int i,count=0;
    for(i=0;i<strlen(str)-1;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("Total Spaces in a given string=%d",count);
    printf("\n");
    return 0;
}