#include <stdio.h>
#include <math.h>
int main(void)
{
    
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i = 1; i <= 10; i++)
    {
        float result = pow(n,i);
        printf("%d\n",(int)result);

    }
}