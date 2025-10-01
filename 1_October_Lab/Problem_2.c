#include <stdio.h>
int findSecondLargest(int arr[], int size);

//main function
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Error: The array size must be a positive number.\n");
        return -1;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sec_large = findSecondLargest(arr, n);

    if (sec_large != -1)
    {
        printf("\nThe second largest element is %d\n", sec_large);
    }

    return 0;
}

int findSecondLargest(int arr[], int size)
{
    if (size < 2) {
        printf("\nError: Array must have at least 2 elements to find a second largest.\n");
        return -1;
    }

    int largest, second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    int i;

    for (i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}