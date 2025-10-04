//Batch 46 23 sep Questions
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n) ;

    printf("multiply(m, n): %d\n", multiply(m, n));
    printf("multiply(m+n, m-n): %d\n", multiply(m + n, m - n));
    printf("multiply(8, 9): %d\n", multiply(8, 9));
    printf("multiply(m, sum(m, n)): %d\n", multiply(m, sum(m, n)));
    printf("multiply(n, m%%n): %d\n", multiply(n, m % n));
    printf("multiply(m++, --n): %d\n", multiply(m++, --n));

    return 0;
}
