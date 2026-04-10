#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x = n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    
    if (rev == x)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}