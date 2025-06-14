#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        count++;
        if(str[i]==' ')
        {
            count--;
        }
    }
    printf("Total Words in a given string=%d",count);
    printf("\n");
    return 0;
}