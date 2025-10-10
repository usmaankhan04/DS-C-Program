#include <stdio.h>

int main() {
    // We're going to store up to 100 numbers in this array
    int arr[100], size, pos, value;

    // Ask the user how many numbers they want to enter
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Now we take those numbers one by one
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask what number they want to insert
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Ask where they want to insert it (position in array)
    printf("Enter the position to insert (0 to %d): ", size);
    scanf("%d", &pos);

    // If the position is outside the valid range, stop the program
    if (pos < 0 || pos > size) {
        printf("Invalid Position\n");
        return 1;
    }

    // Move everything one step to the right to make space
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the new value in the right spot
    arr[pos] = value;
    size++;  // Don't forget to update the size!

    // Show the updated array to the user
    printf("Updated Array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}