#include <stdio.h>
#include <math.h>

int length(int no);

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
        sum += (int)pow(no, len);
    }
    if(sum == x)
    {
        printf("%d is an armstrong number", x);
    }
    else
    {
        printf("%d is not an armstrong number", x);
    }
    return 0;  // Added for good practice
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