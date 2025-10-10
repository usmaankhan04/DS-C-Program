#include <stdio.h>

int main() {
    int arr[100]; 
    int size, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

      printf("Enter the value to insert in the middle: ");
    scanf("%d", &value);

    // Calculate the middle position and store it in 'pos'
    pos = size / 2;

    // Shift elements to the right to make space at 'pos'
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the middle position
    arr[pos] = value;
    size++; // Increase the size of the array

    // Updated 
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}