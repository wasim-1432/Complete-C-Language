#include<stdio.h>
#include<string.h>
int Count_Freaquency_Of_Each_Character(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Count_Freaquency_Of_Each_Character(str);
    printf("\n");
    return 0;
}
char* Sort(char str[])
{
    int round,i,l=strlen(str);
    for(round=0;round<l-1;round++)
    {
        for(i=0;i<l-round-1;i++)
        {
            if(str[i]>str[i+1])
            {
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    return str;
}
int Count_Freaquency_Of_Each_Character(char str[])
{
    int i,count[26]={0};
    str=Sort(str);
    for(i=0;str[i];i++)
    {
        count[str[i]-'a']++;
    }
    for(i=0;str[i];i++)
    {
        if(str[i]!=str[i+1])
        {
            printf("%c-%d\n",str[i],count[str[i]-'a']);
        }
    }
}