#include<stdio.h>
#include<string.h>
char* Remove_Trim_Spaces_In_A_Given_String_From_Starting_And_Ending(char str[]);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Required Answer is=%s",Remove_Trim_Spaces_In_A_Given_String_From_Starting_And_Ending(str));
    printf("\n");
    return 0;
}
char* Remove_Trim_Spaces_In_A_Given_String_From_Starting_And_Ending(char str[])
{
    int i=0,l=strlen(str),k=0;
    char* temp=(char*)malloc((l+1)*sizeof(char));
    while(str[i]==' ')
    {
        i++;
    }
    while(str[l-1]==' ')
    {
        l--;
    }
    while(i<l)
    {
        temp[k++]=str[i];
        i++;
    }
    temp[k]='\0';
    return temp;
}