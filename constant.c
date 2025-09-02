#include <stdio.h>

int main ()
{

//constant s a feixed value that cannot be altered by the program during its execution

    const float PI = 3.14; // pi is a constant value, it should not change

    //PI = 43554;      if this was not a comment, it would cause an error because PI is a constant because of the 'const' keyword

    printf("%.2f\n", PI); // this will print the value of pi, but it has been changed

    return 0;

}