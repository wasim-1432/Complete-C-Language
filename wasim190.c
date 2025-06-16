#include<stdio.h>
#include<string.h>
int Find_Character_In_A_Given_String_Between_Specified_Index(char str[],char ch,int a,int b);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    int a,b;
    printf("Enter starting and ending points\n");
    scanf("%d%d",&a,&b);
    printf("Required answer is=%d",Find_Character_In_A_Given_String_Between_Specified_Index(str,ch,a,b));
    printf("\n");
    return 0;
}
int Find_Character_In_A_Given_String_Between_Specified_Index(char str[],char ch,int a,int b)
{
    int i;
    for(i=a;i<b;i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}