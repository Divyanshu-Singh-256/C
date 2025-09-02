#include <stdio.h>

int main() {
    int a, b, c;
    float x, y, z;
    char ch1, ch2, ch3;
    printf("Give input for three integers, three floats, and three characters:\n");
    scanf("  %d %d %d", &a, &b, &c);
    scanf("  %f %f %f", &x, &y, &z);
    scanf("  %c", &ch1);
    scanf("  %c", &ch2);
    scanf("  %c", &ch3);


    printf("Addition of the integer values is: %d\n", a + b + c);
    printf("Addition of the integer as well as the float values is: %.2f\n", a + b + c + x + y + z);
    printf("Addition of the float values is: %.2f\n", x + y + z);
    printf("Characyter values are: %c %c %c\n", ch1, ch2, ch3);
    printf("Sum of the ASCII values of the characters is: %d\n", ch1 + ch2 + ch3);

    return 0;
}
