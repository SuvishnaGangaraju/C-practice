#include <stdio.h>
int main()
{
    int i , N, count;
    count = 0;
    printf("Enter N:");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        if(i%3==0 && i%5==0)
        {
            count++;
        }
    }
    printf("The number of numbers divisible by 3 and 5 from 1 to %d is:%d",N, count);
    return 0;
}
