/* 10. Write C code to print the following patterns: 

i)                               ii)
            1                        E  
          1 2 1                    E D E  
        1 2 3 2 1                E D C D E  
      1 2 3 4 3 2 1            E D C B C D E  
    1 2 3 4 5 4 3 2 1        E D C B A B C D E    
      1 2 3 4 3 2 1            E D C B C D E  
        1 2 3 2 1                E D C D E  
          1 2 1                    E D E  
            1                        E


 */



// i)
#include <stdio.h>

int main() {
    int n = 5; // Number of lines for top half

    // Top half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++)
            printf("%d ", j);

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++)
            printf("%d ", j);

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}




// ii)

#include <stdio.h>

int main() {
    int n = 5; // Number of lines for top half
    char start = 'A' + n - 1;

    // Top half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        // Print decreasing letters
        for (char c = start; c >= start - i + 1; c--)
            printf("%c ", c);

        // Print increasing letters
        for (char c = start - i + 2; c <= start; c++)
            printf("%c ", c);

        printf("\n");
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        // Print decreasing letters
        for (char c = start; c >= start - i + 1; c--)
            printf("%c ", c);

        // Print increasing letters
        for (char c = start - i + 2; c <= start; c++)
            printf("%c ", c);

        printf("\n");
    }

    return 0;
}

