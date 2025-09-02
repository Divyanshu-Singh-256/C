# include <stdio.h>


int main() {
    // Arithmetic Operators in C

    int a = 10, b = 5;
    int sum, difference, product, quotient, remainder;

    // Addition
    sum = a + b;
    printf("Sum: %d\n", sum);

    // Subtraction
    difference = a - b;
    printf("Difference: %d\n", difference);

    // Multiplication
    product = a * b;
    printf("Product: %d\n", product);

    // Division
    quotient = a / b;
    printf("Quotient: %d\n", quotient);

    // Modulus
    remainder = a % b;
    printf("Remainder: %d\n", remainder);


    int x = 10, y = 4;
    float divisionResult = (float)x / y; // Type casting to float for accurate division
    printf("Division Result: %.2f\n", divisionResult);

    double remainder2 = x %  y; // This will give a float result
    printf("Remainder Result: %f\n", remainder2);
   


    return 0;
}

/*
augmented assignment operators
    a += b; // equivalent to a = a + b
    printf("After += : %d\n", a);

    a -= b; // equivalent to a = a - b
    printf("After -= : %d\n", a);

    a *= b; // equivalent to a = a * b
    printf("After *= : %d\n", a);

    a /= b; // equivalent to a = a / b
    printf("After /= : %d\n", a);

    a %= b; // equivalent to a = a % b
    printf("After %%= : %d\n", a);



*/