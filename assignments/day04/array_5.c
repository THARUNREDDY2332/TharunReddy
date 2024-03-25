#include <stdio.h>

void findSubarray(int arr[], int n, int sum) {
    int curr_sum = arr[0];
    int start = 0;
    int i;

    for (i=1;i<=n;i++) {
        while (curr_sum > sum && start <i-1) {
            curr_sum -= arr[start];
            start++;
        }
        if (curr_sum == sum) {
            printf("Sum found between indexes %d and %d\n", start, i-1);
            return;
	}

    }
}
