#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do not form a valid triangle.\n");
    }

    if (a == b && b == c) {
        printf("This is an equillateral triangle.\n");
    } else if (a == b || b == c || c == a) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    s = (a + b + c)/ 2;
    area = sqrt(s * (s - a) * (s - b)* (s - c));
    printf("The area of the trianle is: %.2f\n", area);

    return 0;
} 