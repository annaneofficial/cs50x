// Goal: Write a program that checks if a number is positive, negative, or zero.
#include <stdio.h>
void check(int n)
{
    if (n > 0)
    {
        printf("the %d is Positive\n",n);
    }
    else if ( n < 0)
    {
        printf("the %d is Negative \n",n);
    }
    else
        printf("the %d is Zero\n",n);
}

int main(void)
{
    check(0);
    return (0);
}