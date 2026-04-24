#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array elements in reverse order are:\n");
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}