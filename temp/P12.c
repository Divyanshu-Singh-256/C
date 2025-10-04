/*wap to convert 
1. decimal to binary
2. decimal to octal
3. decimal to hexadecimal
4. binary to decimal
5. binary to octal
6. binary to hexadecimal
7. octal to binary
8. octal to decimal
9. octal to hexadecimal
10. hexadecimal to octal
11. hexadecimal to binary
12. hexadecimal to decimal
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void decimalToBinary(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
void decimalToOctal(int n) {
    int octal[32];
    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
void decimalToHexadecimal(int n) {
    char hexadecimal[32];
    int i = 0;
    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        n = n / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}
int binaryToDecimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}
void binaryToOctal(const char *binary) {
    int decimal = binaryToDecimal(binary);
    decimalToOctal(decimal);
}
void binaryToHexadecimal(const char *binary) {
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal);
}
int octalToDecimal(const char *octal) {
    int decimal = 0;
    int length = strlen(octal);
    for (int i = 0; i < length; i++) {
        decimal += (octal[length - i - 1] - '0') * pow(8, i);
    }
    return decimal;
}
void octalToBinary(const char *octal) {
    int decimal = octalToDecimal(octal);
    decimalToBinary(decimal);
}
void octalToHexadecimal(const char *octal) {
    int decimal = octalToDecimal(octal);
    decimalToHexadecimal(decimal);
}
int hexadecimalToDecimal(const char *hexadecimal) {
    int decimal = 0;
    int length = strlen(hexadecimal);
    for (int i = 0; i < length; i++) {
        char ch = hexadecimal[length - i - 1];
        int value;
        if (ch >= '0' && ch <= '9') {
            value = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            value = ch - 'A' + 10;
        } else if (ch >= 'a' && ch <= 'f') {
            value = ch - 'a' + 10;
        } else {
            printf("Invalid hexadecimal digit: %c\n", ch);
            return -1;
        }
        decimal += value * pow(16, i);
    }
    return decimal;
}
void hexadecimalToBinary(const char *hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    if (decimal != -1) {
        decimalToBinary(decimal);
    }
}
void hexadecimalToOctal(const char *hexadecimal) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    if (decimal != -1) {
        decimalToOctal(decimal);
    }
}
int main() {
    int choice;
    printf("Choose the conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Binary to Octal\n");
    printf("6. Binary to Hexadecimal\n");
    printf("7. Octal to Binary\n");
    printf("8. Octal to Decimal\n");
    printf("9. Octal to Hexadecimal\n");
    printf("10. Hexadecimal to Binary\n");
    printf("11. Hexadecimal to Octal\n");
    printf("12. Hexadecimal to Decimal\n");
    printf("Enter your choice (1-12): ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= 3) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        switch (choice) {
            case 1:
                decimalToBinary(decimal);
                break;
            case 2:
                decimalToOctal(decimal);
                break;
            case 3:
                decimalToHexadecimal(decimal);
                break;
        }
    } 
    else if (choice >= 4 && choice <= 6) {
        char binary[33];
        printf("Enter a binary number: ");
        scanf("%s", binary);
        switch (choice) {
            case 4:
                printf("Decimal: %d\n", binaryToDecimal(binary));
                break;
            case 5:
                binaryToOctal(binary);
                break;
            case 6:
                binaryToHexadecimal(binary);
                break;
        }
    } 
    else if (choice >= 7 && choice <= 9) {
        char octal[12];
        printf("Enter an octal number: ");
        scanf("%s", octal);
        switch (choice) {
            case 7:
                octalToBinary(octal);
                break;
            case 8:
                printf("Decimal: %d\n", octalToDecimal(octal));
                break;
            case 9:
                octalToHexadecimal(octal);
                break;
        }
    } 
    else if (choice >= 10 && choice <= 12) {
        char hexadecimal[9];
        printf("Enter a hexadecimal number: ");
        scanf("%s", hexadecimal);
        switch (choice) {
            case 10:
                hexadecimalToBinary(hexadecimal);
                break;
            case 11:
                hexadecimalToOctal(hexadecimal);
                break;
            case 12:
                printf("Decimal: %d\n", hexadecimalToDecimal(hexadecimal));
                break;
        }
    }
    return 0;
}