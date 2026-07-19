#include <stdio.h>

int main()
{
    char name[50];
    int answer;
    int score = 0;

    printf("================================\n");
    printf("      QUIZ APPLICATION\n");
    printf("================================\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nWelcome %s!\n", name);
    printf("Answer the following questions.\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Delhi\n");
    printf("2. Mumbai\n");
    printf("3. Chennai\n");
    printf("4. Kolkata\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\nQ3. Which language are you learning?\n");
    printf("1. Python\n");
    printf("2. Java\n");
    printf("3. C\n");
    printf("4. HTML\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Final Result
    printf("\n=========================\n");
    printf("Quiz Finished!\n");
    printf("Your Score = %d / 3\n", score);

    if(score == 3)
    {
        printf("Excellent!\n");
    }
    else if(score == 2)
    {
        printf("Very Good!\n");
    }
    else if(score == 1)
    {
        printf("Good! Keep Practicing.\n");
    }
    else
    {
        printf("Try Again!\n");
    }

    return 0;
}