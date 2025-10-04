//wap to find sum of series upto n numbers
//make it so that user gives input for which series they want the sum of
#include <stdio.h>
int main() {
    int n, i, choice;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Choose the series to sum:\n");
    printf("1. Harmonic series (1 + 1/2 + 1/3 + ... + 1/n)\n");
    printf("2. Square series (1^2 + 2^2 + 3^2 + ... + n^2)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    for (i = 1; i <= n; i++) {
        if (choice == 1) {
            sum += (1.0 / i);
        } 
        else if (choice == 2) {
            sum += (i * i);
        }
        else {
            printf("Invalid choice!\n");
            return 1;
        }
    }
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}