/*
Rotate array every kth element
i/p
No of Elements in the list = 9
Enter the elements

1 2 3 4 5 6 7 8 9

i/p
k= 3

o/p
3 2 1 6 5 4 9 8 7


k=6
6 5 4 3 2 1 9 8 7

k=4
4 3 2 1 8 7 6 5 9


*\



#include <stdio.h>

// Function to reverse the array from start to end indices
void reverseArray(int array[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end indices
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        // Move indices towards the center
        start++;
        end--;
    }
}

// Function to rotate the array every kth element
void rotateArray(int array[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        // Calculate the end index of the current segment
        int end = i + k - 1;
        if (end >= n) {
            end = n - 1;
        }
        // Reverse the current segment of the array
        reverseArray(array, i, end);
    }
}

int main() {
    int array[100]; // Declare an array of size 100
    int n, k; // Variables to store the size of the array and the value of k

    // Input the size of the array
    printf("No of Elements in the list: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the value of k
    printf("k = ");
    scanf("%d", &k);

    // Rotate the array every kth element
    rotateArray(array, n, k);

    // Output the rotated array
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
