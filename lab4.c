#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display Fibonacci series
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", first);
            continue;
        }
        if(i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}

