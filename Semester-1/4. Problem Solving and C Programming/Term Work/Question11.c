/* Q11. WAP in C to input time in hour, minutes, and seconds. Display it in proper format. Then input two time-instance and add them and display the added time again in proper format.  
First time is  10:12:34  
Second time  21:21:59  
Added time  31:34:33 
*/

#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    int h, m, s;

    // Input first time
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &h1, &m1, &s1);

    // Input second time
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    // Add seconds
    s = s1 + s2;
    m = m1 + m2 + s / 60;  // carry from seconds
    s = s % 60;

    // Add hours
    h = h1 + h2 + m / 60;  // carry from minutes
    m = m % 60;

    // Display results
    printf("\nFirst time  : %02d:%02d:%02d\n", h1, m1, s1);
    printf("Second time : %02d:%02d:%02d\n", h2, m2, s2);
    printf("Added time  : %02d:%02d:%02d\n", h, m, s);

    return 0;
}
