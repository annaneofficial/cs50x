#include <cs50.h>
#include <stdio.h>

// function prototype
void print_row(int n);

int main()
{
    // user input
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);
    // call the function
    print_row(height);
}
// function that print rows.
void print_row(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
