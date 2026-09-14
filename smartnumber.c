#include <stdio.h>

int main() {
    int N;
    int evenSum = 0;
    int oddSum = 0;
    int div3Sum = 0;
    int count35 = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N must be a positive integer.\n");
        
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }

        if (i % 3 != 0) {
            continue;
        }

        div3Sum += i;

        if (i % 5 == 0) {
            count35++;
        }
    }

    printf("Sum of even numbers from 1 to %d: %d\n", N, evenSum);
    printf("Sum of odd numbers from 1 to %d: %d\n", N, oddSum);
    printf("Sum of numbers divisible by 3: %d\n", div3Sum);
    printf("Count of numbers divisible by both 3 and 5: %d\n", count35);

    return 0;
}
