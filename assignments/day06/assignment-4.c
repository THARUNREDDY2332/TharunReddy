/*

4.reverse the array elements.

*\


#include <stdio.h>

int main() {
    int array[100]; // Declare an array of size 100
    // Initialize the array with numbers from 1 to 100
    for (int i = 0; i < 100; i++) {
        array[i] = i + 1;
    }

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Reverse the array elements
    int start = 0;
    int end = 99;
    while (start < end) {
        // Swap elements at start and end indices
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        // Move indices towards the center
        start++;
        end--;
    }

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
