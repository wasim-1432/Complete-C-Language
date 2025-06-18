#include<stdio.h>
#include<string.h>
char* Sort(char str[])
{
    int len=strlen(str);
    int round,i;
    for(round=0;round<len-1;round++)
    {
        for(i=0;i<len-round-1;i++)
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
int main()
{
    char str[30],ch;
    int count=1,maxCount=1;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    Sort(str);
    int i=0;
    while(str[i])
    {
        count=1;
        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }
        if(maxCount<count)
        {
            maxCount=count;
            ch=str[i];
        }
        i++;
    }
    printf("%c ",ch);
    printf("\n");
    return 0;
}