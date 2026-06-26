#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("=== Simple Quiz Application ===\n");

    printf("\nQ1. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. HTML\n2. C\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ3. 5 + 10 = ?\n");
    printf("1. 12\n2. 13\n3. 15\n4. 20\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}