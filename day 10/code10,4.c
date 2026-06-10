#include <stdio.h>

int main() {
    int i, j, k, rows = 5;
    char ch;

    for(i = 1; i <= rows; i++) {

        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        // Print descending characters
        ch -= 2;
        for(k = 1; k < i; k++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}