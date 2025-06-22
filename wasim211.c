#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Count_Correct_Email(char **str,int n);
int main()
{
    int n;
    printf("Enter number of words\n");
    scanf("%d",&n);
    char ** str=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        str[i]=(char*)malloc(30*sizeof(char));
    }
    printf("Required Answer is=%d",Count_Correct_Email(str,n));
    for(int i=0;i<n;i++)
    {
        free(str[i]);
    }
    free(str);
    printf("\n");
    return 0;
}
int Count_Correct_Email(char **str,int n)
{
    int i,l,j,count=0;
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    char V[]="gmail.com";
    i=0;
    l=0;
    while(str[i][l]!='.')
    {
        l++;
    }
    j=0;
    char result[30];
    while(str[i][l]!='\0')
    {
        result[j]=str[i][l];
        j++;
        l++;
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(str[i],V)==0)
        {
            count++;
        }
    }
    return count;
}