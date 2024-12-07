#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change_owed;

    // Prompt the user for a non-negative integer
    do
    {
        change_owed = get_int("Change owed (in cents): ");
    } while (change_owed < 0);

    // Initialize coin count
    int coins = 0;

    // Calculate the number of quarters
    while (change_owed >= 25)
    {
        change_owed -= 25;
        coins++;
    }

    // Calculate the number of dimes
    while (change_owed >= 10)
    {
        change_owed -= 10;
        coins++;
    }

    // Calculate the number of nickels
    while (change_owed >= 5)
    {
        change_owed -= 5;
        coins++;
    }

    // Calculate the number of pennies
    while (change_owed >= 1)
    {
        change_owed -= 1;
        coins++;
    }

    // Print the total number of coins
    printf("%d\n", coins);
}

