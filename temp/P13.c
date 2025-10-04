// wap to understand the usage of operators in C 
#include <stdio.h>
int main() {
    int a = 5, b = 10, c;
    c = a + b;
    printf("Addition: %d\n", c);
    c = a - b;
    printf("Subtraction: %d\n", c);
    c = a * b;
    printf("Multiplication: %d\n", c);
    c = b / a;
    printf("Division: %d\n", c);
    c = b % a;
    printf("Modulus: %d\n", c);
    return 0;
}