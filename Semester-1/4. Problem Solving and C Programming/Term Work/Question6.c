// Q6. Write a program in C to convert a Decimal number into Binary, Octal and Hexadecimal number.  

#include <stdio.h>

// Function to convert and print in given base
void convertToBase(int num, int base) {
    char digits[] = "0123456789ABCDEF"; 
    char result[64]; 
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        result[i++] = digits[num % base]; 
        num /= base;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%c", result[j]);
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("\nBinary: ");
    convertToBase(n, 2);

    printf("\nOctal: ");
    convertToBase(n, 8);

    printf("\nHexadecimal: ");
    convertToBase(n, 16);

    printf("\n");
    return 0;
}
