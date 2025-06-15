#include<stdio.h>
#include<string.h>
int Count_Length_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Length is=%d",Count_Length_In_A_Given_String(str));
    printf("\n");
    return 0;
}
int Count_Length_In_A_Given_String(char str[])
{
    int length;
    int i,count=0;
    for(i=0;str[i];i++)
    {
        count++;
    }
    return count;
}