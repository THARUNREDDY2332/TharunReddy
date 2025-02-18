
/*
2.Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

*\



#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find and print pairs of prime numbers that sum up to the given number
void findPrimePairs(int num) {
    int count = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            if (i <= num - i || (i == num - i && i == num)) {
                printf("%d = %d + %d\n", num, i, num - i);
                count++;
            }
        }
    }
    printf("NoofWays = %d\n", count);
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Finding and printing prime pairs
    findPrimePairs(number);

    return 0;
}
