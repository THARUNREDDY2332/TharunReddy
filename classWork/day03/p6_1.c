Program in C to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Program in C to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No







#include <stdio.h>

int main() {
    int num, digit, even_product = 1, odd_product = 1, position = 1;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    while (num > 0) {
        digit = num % 10;
        if (position % 2 == 0) {
            even_product *= digit;
        } else {
            odd_product *= digit;
        }
        num /= 10;
        position++;
    }

   
    if (even_product == odd_product) {
        printf("Yes\n");
    } else {
        printf("No\n");
 }

    return 0;
}
