//Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.
#include <stdio.h>
int fibo(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}