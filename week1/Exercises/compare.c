#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("what's X? ");
    int y = get_int("what's Y? ");

    if ( x > y)
    {
        printf("X is Greather than Y\n");
    }
    else if ( x < y)
    {
        printf("X is Less than Y\n");
    }
    else
        printf("X and Y are Equal!\n");
}
