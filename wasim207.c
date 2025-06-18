#include<stdio.h>
#include<string.h>
void Print_Words_With_Ending_S(char str[][30],int n);
int main()
{
    char string[100][30];
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    getchar();
    Print_Words_With_Ending_S(string,n);
    printf("\n");
    return 0;
}
void Print_Words_With_Ending_S(char str[][30],int n)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    printf("Required Answer is\n");
    for(i=0;i<n;i++)
    {
        for(l=0;str[i][l];l++)
        {
            if(str[i][l+1]=='\0' && str[i][l]=='s')
            {
                printf("%s ",str[i]);
            }
        }
    }
}