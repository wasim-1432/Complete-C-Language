#include<stdio.h>
#include<string.h>
void Search_All_Occurrence(char* str,char ch,int* arr);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    int arr[30];
    Search_All_Occurrence(str,ch,arr);
    printf("\n");
    return 0;
}
void Search_All_Occurrence(char* str,char ch,int* arr)
{
    int i,l=strlen(str),k=0;
    for(i=0;i<l;i++)
    {
        if(str[i]==ch)
        {
            arr[k++]=i;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
}