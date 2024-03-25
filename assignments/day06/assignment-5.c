/*
Q5.Sum of Even and odd values in the array

*\

#include <stdio.h>

int main() {
    int array[100]; // Declare an array of size 100
    int n; // Variable to store the size of the array
    int sum_even = 0, sum_odd = 0; // Variables to store the sum of even and odd values

    // Input the size of the array
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Calculate the sum of even and odd values
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            sum_even += array[i]; // Add even value to sum_even
        } else {
            sum_odd += array[i]; // Add odd value to sum_odd
        }
    }

    // Output the sum of even and odd values
    printf("Sum of even values: %d\n", sum_even);
    printf("Sum of odd values: %d\n", sum_odd);

    return 0;
}
