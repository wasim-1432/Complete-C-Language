#include<stdio.h>
#include<math.h>
int main()
{
    for(int n=0;n<=1000;n++)
    {
        int count = 0, t = n, sum = 0, r;
        while (t)
        {
            count++;
            t /= 10;
        }
        int s = n;
        while (s)
        {
            r = s % 10;
            sum = sum + (int)pow(r, count); 
            s /= 10;
        }
        if (n == sum)
            printf("%d ",n);
    }
    return 0;
}