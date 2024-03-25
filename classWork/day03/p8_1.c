/*


Write a program to Check whether product of digits at even places is divisible by sum of digits at odd place of a number.

Examples:
Input:
2157
Output:
TRUE

Input:
1234
Output:
TRUE

*\





#include <stdio.h>

int main() {
    int num, digit, even_product = 1, odd_sum = 0, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (position % 2 == 0) {
            even_product *= digit;
        } else {
            odd_sum += digit;
        }
        num /= 10;
        position++;
    }

    if (even_product % odd_sum == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
