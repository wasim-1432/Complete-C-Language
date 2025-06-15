#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int count1=0,count2=0,count3=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            count1++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            count1++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    printf("Alphabet is=%d\n",count1);
    printf("Digits is=%d\n",count2);
    printf("Special Character=%d",count3);
    printf("\n");
    return 0;
}