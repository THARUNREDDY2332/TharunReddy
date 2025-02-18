/*

Q6.Sum of Even and odd pos values in the array

*\


#include <stdio.h>

int main() {
    int array[100]; // Declare an array of size 100
    int n; // Variable to store the size of the array
    int sum_even_pos = 0, sum_odd_pos = 0; // Variables to store the sum of even and odd values at even positions

    // Input the size of the array
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Calculate the sum of even and odd values at even positions
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Check if the position is even
            if (array[i] % 2 == 0) {
                sum_even_pos += array[i]; // Add even value at even position to sum_even_pos
            } else {
                sum_odd_pos += array[i]; // Add odd value at even position to sum_odd_pos
            }
        }
    }

    // Output the sum of even and odd values at even positions
    printf("Sum of even values at even positions: %d\n", sum_even_pos);
    printf("Sum of odd values at even positions: %d\n", sum_odd_pos);

    return 0;
}
