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
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int found = 0; 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            printf("Element found at index: %d\n", i);
            found = 1; 
            break; 
        }
    }
    if(!found)
    {
        printf("Element not found in the array.\n");
    }
}