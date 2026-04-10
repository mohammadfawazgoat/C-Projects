#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    int fn = 0;
    int sn = 1;
    int tn;
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", fn);
        tn = fn + sn;
        fn = sn;
        sn = tn;
    }
}