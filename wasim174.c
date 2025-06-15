#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],pattern[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any word\n");
    fgets(pattern,30,stdin);
    pattern[strlen(pattern)-1]='\0';
    int i,j;
    int m=strlen(str);
    int n=strlen(pattern);
    for(i=0;i<=m-n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i+j]!=pattern[j])
            {
                break;
            }
        }
        if(j==n)
        {
            printf("First Occurrence is=%d",i);
            return 0;
        }
    }
    printf("Not Found");
    printf("\n");
    return 0;
}