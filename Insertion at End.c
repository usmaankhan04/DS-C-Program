#include <stdio.h>

int main() {
    int arr[100]; 
    int size, value;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);

    // We'll place the new value right after the last element
    arr[size] = value;

    // Since we added one more item, let's update the size
    size++;

    
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Print each number in the updated array
    }

    return 0;
}