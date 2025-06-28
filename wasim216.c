#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* Extract_String(char* str,int start_index,int end_index);
int main()
{
    char str[30];
    int start_index,end_index;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter starting and ending index\n");
    scanf("%d%d",&start_index,&end_index);
    printf("Required Answer is=%s",Extract_String(str,start_index,end_index));
    printf("\n");
    return 0;
}
char* Extract_String(char* str,int start_index,int end_index)
{
    int len=strlen(str),i,k=0;
    char* temp=(char*)malloc(len*sizeof(char));
    for(i=start_index;i<end_index;i++)
    {
        temp[k++]=str[i];
    } 
    return temp;
}