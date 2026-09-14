#include <stdio.h>
int main()
{
    int i;
    int count = 0;
    printf("Enter a number:");
    scanf("%d",&i);
    while(i!=0)
    {
        i = i/10;
        count++;
    }
    printf("Number of digits = %d\n",count);
    return 0;
}