#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
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
        printf("Armstrong Number...!\n");
    else
        printf("Not Armstrong Number...!\n");

    return 0;
}
