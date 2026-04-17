#include <stdio.h>

int main(void)
{
    
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n",n);
        n = n * n;

    }
}