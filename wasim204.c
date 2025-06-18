#include<stdio.h>
#include<string.h>
int Count_Total_Vowels_In_2D_Char_Array(char str[][30],int n);
int main()
{
    char string[100][30];
    int n;
    printf("Enter the number of string\n");
    scanf("%d",&n);
    getchar();
    printf("Total Vowels in a given strings=%d",Count_Total_Vowels_In_2D_Char_Array(string,n));
    printf("\n");
    return 0;
}
int Count_Total_Vowels_In_2D_Char_Array(char str[][30],int n)
{
    int i,l,count=0;
    char V[]="aeiouAEIOU";
    for(i=0;i<n;i++)
    {
        fgets(str[i],30,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    for(i=0;i<n;i++)
    {
        for(l=0;str[i][l];l++)
        {
            for(int j=0;V[j];j++)
            {
                if(str[i][l]==V[j])
                {
                    count++;
                }
            }
        }
    }
    return count;
}