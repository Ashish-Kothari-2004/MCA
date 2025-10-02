/* Q3. WAP in C to enter the marks in three subjects for a student and find percentage and Scholarship. Rules for the semester scholarship are as follows:   
Below 50   =   0  
51 to 60  =  5%  
61 to 74   =  20%  
75 to 84  =  30%  
85 & above  =  50%  
Semester fee is Rs. 125000/- print the net amount payable. Ask the user to enter marks in 5 subjects and display the corresponding grade.   
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, s1, s2, s3, s4, s5;
    float percent3, percent5;
    float fee = 125000, scholarship = 0, payable;

    // ---- Part 1: Scholarship ----
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    percent3 = (m1 + m2 + m3) / 3.0;

    if (percent3 < 50)
        scholarship = 0;
    else if (percent3 <= 60)
        scholarship = 0.05 * fee;
    else if (percent3 <= 74)
        scholarship = 0.20 * fee;
    else if (percent3 <= 84)
        scholarship = 0.30 * fee;
    else
        scholarship = 0.50 * fee;

    payable = fee - scholarship;

    printf("\n--- Scholarship Section ---\n");
    printf("Percentage (3 subjects): %.2f%%\n", percent3);
    printf("Scholarship Amount: Rs. %.2f\n", scholarship);
    printf("Net Payable Fee: Rs. %.2f\n", payable);

    // ---- Part 2: Grade ----
    printf("\nEnter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    percent5 = (s1 + s2 + s3 + s4 + s5) / 5.0;

    printf("\n--- Grade Section ---\n");
    printf("Percentage (5 subjects): %.2f%%\n", percent5);

    if (percent5 >= 85)
        printf("Grade: A\n");
    else if (percent5 >= 75)
        printf("Grade: B\n");
    else if (percent5 >= 61)
        printf("Grade: C\n");
    else if (percent5 >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
