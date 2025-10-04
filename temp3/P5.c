//Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>
// there will be a fn that will calculate the factorial using recursion and one that does it without and in the main function a choice will be given to the user regarding recursive or not reccursive
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}
int factorial_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int n, r, choice;
    printf("Enter values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);
    if (n < r || r < 0) {
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }
    printf("Choose method to calculate factorial:\n1. Recursive\n2. Non-Recursive\nEnter choice (1 or 2): ");
    scanf("%d", &choice);
    int fact_n, fact_r, fact_n_r;
    if (choice == 1) {
        fact_n = factorial_recursive(n);
        fact_r = factorial_recursive(r);
        fact_n_r = factorial_recursive(n - r);
    } else if (choice == 2) {
        fact_n = factorial_non_recursive(n);
        fact_r = factorial_non_recursive(r);
        fact_n_r = factorial_non_recursive(n - r);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }
    int binomial_coefficient = fact_n / (fact_r * fact_n_r);
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, r, binomial_coefficient);
    return 0;
}