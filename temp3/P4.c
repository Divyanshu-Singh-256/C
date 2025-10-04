//WAP to find the type and area of a triangle.
#include <stdio.h>
#include <math.h>
void triangleTypeAndArea(float a, float b, float c) {
    float s, area;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
       s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
}
int main() {
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);
    triangleTypeAndArea(side1, side2, side3);
    return 0;
}