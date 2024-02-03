#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    char dc[] = "Anik";
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);
    printf("Sum of a and b is %d\n", c);
    printf("Name is %s\n", dc);

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float)userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f\n", percentage);

    int isProgrammingFun = 1;
    int isFishTasty = 0;
    int x = 10;
    int y = 9;
    bool isCSharpFun = true;
    bool isFishTasty4 = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isFishTasty);
    printf("%d\n", x > y);
    printf("%d\n", isCSharpFun);
    printf("%d", isFishTasty4);
    return 0;
}