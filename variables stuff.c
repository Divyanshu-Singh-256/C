// variable creation in c is done in two steps declararion and initalization 

#include <stdio.h>

int main() {
    // Declaration of variables
    int a; // integer variable
    float b; // float variable
    char c; // character variable

    // Initialization of variables
    a = 5; // assigning value to integer variable
    b = 6.00; // assigning value to float variable
    c = 'A'; // assigning value to character variable
    double d = 6.955638965478625; // double variable for more precision, more accurate than floats , so genrally used more than float

    char name[] = "Divyanshu"; // this is how you strore string as c is not obeject oriented language

    // Printing the values of the variables
    printf("Integer: %d\n", a);
    printf("Float: %.200f\n", b);
    printf("Character: %c\n", c);
    printf("you are %s \n",name);



    return 0;
}






/*

for strings %s
for float %f
for integer %d  
for character %c
for double %lf
for long double %Lf


*/


/*
for boolean
#include <stdbool.h>
bool isTrue = true; // or false 

*/