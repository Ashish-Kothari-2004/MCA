/* Q7. Write a C program to print the digits of a number in words.  
Sample example of Output will be:  
Enter any number:   2481  

Two Four Eight One  

*/

#include <stdio.h>

int main() {
    int num, digits[20], count = 0;
    char *words[] = {"Zero", "One", "Two", "Three", "Four",
                     "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0) {   // Special case
        printf("Zero\n");
        return 0;
    }

    // Extract digits (in reverse order)
    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }

    // Print digits in correct order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[digits[i]]);
    }
    printf("\n");

    return 0;
}
