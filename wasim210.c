#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Check_How_Many_Words_Starting_From_A(char **str,int n);
int main()
{
    int n;
    printf("Enter the number of words\n");
    scanf("%d",&n);
    getchar();
    char **str=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        str[i]=(char*)malloc(30*sizeof(char));
    }
    printf("Requierd Answer is=%d",Check_How_Many_Words_Starting_From_A(str,n));
    for(int i=0;i<n;i++)
    {
        free(str[i]);
    }
    free(str);
    printf("\n");
    return 0;
}
int Check_How_Many_Words_Starting_From_A(char **str,int n)
{
    int i,l,count=0;
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<n;i++)
    {
        l=0;
        if(str[i][l]=='a')
        {
            count++;
        }
    }
    return count;
}