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

    printf("The array elements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

}