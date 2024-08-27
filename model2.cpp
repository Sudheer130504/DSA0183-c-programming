#include <stdio.h>
#include <string.h>

#define MAX_EXPR_LENGTH 100

// Function to check if two substrings are equal
int areEqual(char* expr, int start1, int end1, int start2, int end2) {
    if ((end1 - start1) != (end2 - start2)) {
        return 0;
    }

    for (int i = start1, j = start2; i <= end1 && j <= end2; i++, j++) {
        if (expr[i] != expr[j]) {
            return 0;
        }
    }
    return 1;
}

// Function to eliminate common subexpression
void eliminateCommonSubexpression(char* expr) {
    int length = strlen(expr);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            // Check if the substrings from i to j are equal
            if (areEqual(expr, i, j, j + 1, j + (j - i))) {
                // Replace the common subexpression with a variable or constant
                expr[j] = 'X';
                for (int k = j + 1; k <= j + (j - i); k++) {
                    expr[k] = ' ';
                }
            }
        }
    }
}

int main() {
    char expression[MAX_EXPR_LENGTH];

    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);

    // Eliminate common subexpression
    eliminateCommonSubexpression(expression);

    printf("Expression after eliminating common subexpression: %s\n", expression);

    return 0;
}

