#include <cs50.h>
#include <stdio.h>

// Function prototype
void print_pyramids(int height);

int main(void)
{
    // User input
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Call the function
    print_pyramids(height);
}

// Function to print two pyramids
void print_pyramids(int height)
{
    for (int i = 1; i <= height; i++)
    {
        // Print left pyramid
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print right pyramid
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
