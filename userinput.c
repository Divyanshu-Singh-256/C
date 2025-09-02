# include <stdio.h>

int main(){

    // User Input in C

    int num;
    float decimal;
    char character;
    char string[100];

    // Taking integer input
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Taking float input
    printf("Enter a float: ");
    scanf("%f", &decimal);
    printf("You entered: %.2f\n", decimal);

    // Taking character input
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any newline character
    printf("You entered: %c\n", character);

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", string); // Reads a word until space
    printf("You entered: %s\n", string);


    
    
    // Taking a full line input (including spaces)
    
    char fullLine[100];
    printf("Enter a full line: ");
    getchar(); // Clear the newline character from the input buffer
    fgets(fullLine, 100, stdin); // Reads a line including spaces
    printf("You entered: %s\n", fullLine);


    return 0;
}