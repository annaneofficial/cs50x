#include <stdio.h>

int main() {
    int n;

    // Get the height of the pyramid from the user
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (int row = 1; row <= n; row++) {
        
        for (int hash = 1; hash <= row; hash++) {
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
