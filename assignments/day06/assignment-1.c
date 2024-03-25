/*

1.Write a program to find the  n-th number made of prime digits.

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

// Function to find the nth number made of prime digits
int nthPrimeDigitNumber(int n) {
    int count = 0;
    int num = 2;
    while (true) {
        int temp = num;
        bool isPrimeDigit = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
                isPrimeDigit = false;
                break;
            }
            temp /= 10;
        }
        if (isPrimeDigit && isPrime(num)) {
            count++;
            if (count == n) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        printf("Enter the value of N: ");
        scanf("%d", &N);
        // Finding the Nth prime digit number
        int result = nthPrimeDigitNumber(N);
        printf("Output:\n%d\n", result);
    }
    return 0;
}
