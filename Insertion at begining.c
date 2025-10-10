#include <stdio.h>

int main() {
    int arr[100];       
    int size, value;

    // Step 1: Ask user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &size);

    // Step 2: Input the elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Ask for the value to insert at the beginning
    printf("Enter the value to be inserted at beginning: ");
    scanf("%d", &value);

    // Step 4: Shift all elements one position to the right
    
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Insert the new value at index 0
    arr[0] = value;
    size++; // Increase the size of the array

    // Step 6: Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}