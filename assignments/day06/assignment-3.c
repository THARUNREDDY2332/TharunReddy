/*

Q3.Store Array from 1 to 100

*\

#include <stdio.h>

int main() {
    int array[100]; // Declare an array of size 100
    for (int i = 0; i < 100; i++) {
        array[i] = i + 1; // Store numbers from 1 to 100 in the array
    }

    // Print the array
    printf("Array from 1 to 100:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");A

    return 0;
}