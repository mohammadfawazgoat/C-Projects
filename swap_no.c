#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter first number: ");
    scanf("%d",&n);
    printf("Enter second number: ");
    scanf("%d",&m);
    n = n + m;
    m = n - m;
    n = n - m;
    printf("After swapping: %d %d\n", n, m);
    
}