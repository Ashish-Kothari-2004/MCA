/* Q8. Write a C program to compute the sum of first N terms for the following series.  
i) S=1+22/2!+33/3!+44/4!+…  
ii) S=1+2/2!+32/3!+43/4!+…  
iii) S=1-2!+3!-4!+5!-6!+…   
*/


// i) S=1+22/2!+33/3!+44/4!+…  
#include <stdio.h>

int main() {
    int N;
    double S = 0;
    long long fact = 1;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fact = (i == 1) ? 1 : fact * i; // iterative factorial
        double term = (i * 10 + i) / (double)fact;
        S += term;
    }

    printf("Sum of Series i) = %.6lf\n", S);
    return 0;
}



// ii)  S=1+2/2!+32/3!+43/4!+…  
#include <stdio.h>

int main() {
    int N;
    double S = 0;
    long long fact = 1;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fact = (i == 1) ? 1 : fact * i;
        double term;
        if (i == 1)
            term = 1;
        else if (i == 2)
            term = 2.0 / fact;
        else
            term = (i * 10 + (i - 1)) / (double)fact;
        S += term;
    }

    printf("Sum of Series ii) = %.6lf\n", S);
    return 0;
}



// iii) S=1-2!+3!-4!+5!-6!+… 
#include <stdio.h>

int main() {
    int N;
    long long S = 0, fact = 1;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fact = (i == 1) ? 1 : fact * i;
        if (i % 2 == 1)
            S += fact;
        else
            S -= fact;
    }

    printf("Sum of Series iii) = %lld\n", S);
    return 0;
}
