#include <stdio.h>
int main()
{
    int a, rem, rev;
    rev = 0;
    printf("Enter input:\n");
    scanf("%d",&a);
    while(a>0)
    {
        rem = a%10;
        rev = (rev*10)+rem;
        a = a/10;
    }
    printf("Reverse of the number is:%d",rev);
    return 0;
}

