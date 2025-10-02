// Q2. WAP in C to check whether a triangle is valid or not by providing all the sides. If valid then check whether the riangle is equilateral, isosceles, or scalene?  

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 1: Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Step 2: Classify triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
