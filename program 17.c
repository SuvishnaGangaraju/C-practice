#include <stdio.h>
int main()
{
    int a;
    int sum;
    sum = 0;
    int b;
    printf("Enter input:");
    scanf("%d",&a);
    while(a>0)
    {
        b = a%10;
        sum = sum + b;
        a = a/10;
        
    }
    printf("Sum of digits = %d",sum);
    return 0;
}


