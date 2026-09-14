#include <stdio.h>
int main()
{
    int a, b, c;
    int count = 0;
    printf("Enter input:");
    scanf("%d",&a);
    while(a>0)
    {
        b = a%10;
        if(b%2!=0)
        {
            count++;
        }
        a = a/10;
    }
    printf("Number of odd digits = %d",count);
    return 0;
}


