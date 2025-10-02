// Q9. Write a program in C to find out the highest common factor (HCF) and lowest common multiple (LCM) of two number.

#include <stdio.h>

// Function to calculate HCF using Euclidean Algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int h = hcf(num1, num2);
    int l = (num1 * num2) / h;

    printf("HCF of %d and %d = %d\n", num1, num2, h);
    printf("LCM of %d and %d = %d\n", num1, num2, l);

    return 0;
}
