#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            printf("%d is an even number\n",i);
        }
        else
        {
            printf("%d is an odd number\n",i);
        }
    }
    return 0;
}

