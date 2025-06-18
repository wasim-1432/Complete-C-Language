#include<stdio.h>
#include<string.h>
void Stored_City_In_2D_Strings(char str[][30],int n);
int main()
{
    char string[100][30];
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    Stored_City_In_2D_Strings(string,n);
    printf("\n");
    return 0;
}
void Stored_City_In_2D_Strings(char str[][30],int n)
{
    int i,l;
    printf("Enter the strings\n");
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    int round;
    char temp[30];
    for(round=0;round<n-1;round++)
    {
        for(i=0;i<n-round-1;i++)
        {
            if(strcmp(str[i],str[i+1])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
}