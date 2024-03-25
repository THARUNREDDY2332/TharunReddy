/*
Isha is playing with numbers and trying to write program to Check if the sum of distinct digits of two integers are equal

Output Format:
If the sum of distinct digits of both the numbers are equal
if true print YES
otherwise print NO.

Examples:
Input:
 2452
 9222
Output:
 YES

Input
121
3035
Output:
 NO
*/





#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num1, num2;
    
    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum of digits for both numbers
    int sum1 = sumOfDigits(num1);
    int sum2 = sumOfDigits(num2);



   // Output
    if (sum1 == sum2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
