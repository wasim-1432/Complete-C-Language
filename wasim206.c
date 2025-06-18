#include<stdio.h>
#include<string.h>
void Remove_Duplicates_In_A_Given_2D_Char_Array(char str[][30],int n);
int main()
{
    char string[100][30];
    int n;
    printf("Enter number of strings\n");
    scanf("%d",&n);
    getchar();
    Remove_Duplicates_In_A_Given_2D_Char_Array(string,n);
    printf("\n");
    return 0;
}
void Remove_Duplicates_In_A_Given_2D_Char_Array(char str[][30],int n)
{
    int i,l;
    printf("Enter the strings\n");
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
    }
    char temp[30];
    int round;
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
    printf("Required Answer is:\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(str[i],str[i+1])==0)
        {
            continue;
        }
        else
        {
            printf("%s ",str[i]);
        }
    }
}