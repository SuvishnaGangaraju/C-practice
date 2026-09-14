#include <stdio.h>
int main()
{
    int i;
    int count = 0;
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
    printf("the number of odd numbers from 1 to %d is:%d",N,count);
    return 0;
}