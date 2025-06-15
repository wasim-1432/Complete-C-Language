#include<stdio.h>
#include<string.h>
int Count_Vowels_In_A_Given_String(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%d",Count_Vowels_In_A_Given_String(str));
    printf("\n");
    return 0;
}
int Count_Vowels_In_A_Given_String(char str[])
{
    int i,l=strlen(str),count=0,j;
    char V[]="AEIOUaeiou";
    for(i=0;i<l;i++)
    {
        for(j=0;j<10;j++)
        {
            if(str[i]==V[j])
            {
                count++;
            }
        }
    }
    return count;
}