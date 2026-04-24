#include <stdio.h>

int length(int no);
int power(int base, int exp);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int x = n;
    int sum = 0;
    int len = length(x);
    while (n > 0)
    {
        int no = n % 10;
        n = n / 10;
        int y = power(no, len);
        printf("%d\n",y);
        sum += y;
    }
    if(sum == x)
    {
        printf("%d is an armstrong number", x);
    }
    else
    {
        printf("%d is not an armstrong number", x);
    }
    return 0;  
}

int length(int no)
{
    int size = 0;
    while(no > 0)
    {
        no = no / 10;
        size++;
    }
    return size;
}

int power(int base, int exp)
{
    int result = 1;
    for(int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}