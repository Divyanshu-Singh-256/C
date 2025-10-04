//WAP program to raise a floating point number to an integer power. use user defined function such as power
#include <stdio.h>
#include <math.h>
float power(float base, int exponent) {
    return pow(base, exponent);
}
int main() {
    float base;
    int exponent;

    printf("Enter base (floating point number): ");
    scanf("%f", &base);
    printf("Enter exponent (integer): ");
    scanf("%d", &exponent);

    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, power(base, exponent));

    return 0;
}