// Q5. Write a program in C to print first n palindrome number. 

#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num) {
    int reversed = 0, temp = num;
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    return (reversed == num);
}

int main() {
    int n, count = 0, num = 1;
    printf("Enter how many palindrome numbers to print: ");
    scanf("%d", &n);

    printf("First %d Palindrome Numbers:\n", n);
    while (count < n) {
        if (isPalindrome(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
