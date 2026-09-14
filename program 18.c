#include <stdio.h>
int main()
{
    int a;
    int product;
    product = 1;
    int b;
    printf("Enter input:");
    scanf("%d",&a);
    while(a>0)
    {
        b = a%10;
        product = product*b;
        a = a/10;
    }
    printf("Product of digits = %d",product);
    return 0;
}


