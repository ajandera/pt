#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int number2;
    char input[50];
    char input2[50];
    int validInput = 0;
    int validInput2 = 0;

    while (!validInput) {
        printf("Please enter a number: ");
        fgets(input, sizeof(input), stdin);

        // Convert input to a number
        if (sscanf(input, "%d", &number) == 1) {
            validInput = 1; // Input is a valid number
        } else {
            printf("Invalid input. Please enter a valid number.\n");
        }
    }

    printf("You entered: %d\n", number);

    while (!validInput2) {
        printf("Please enter a second number: ");
        fgets(input2, sizeof(input2), stdin);

        // Convert input to a number
        if (sscanf(input2, "%d", &number2) == 1) {
            validInput2 = 1; // Input is a valid number
        } else {
            printf("Invalid input. Please enter a valid number.\n");
        }
    }


    printf("The decision of the numbers is %d.\n", number/number2);
    return 0;
}