#include <stdio.h>
#include <stdlib.h>

int validation(char input[50]);

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

        number = validation(input);

        if (number == 0) {
            printf("Invalid input. Please enter a valid number.\n");
        } else {
            validInput = 1; 
        }
    }

    printf("You entered: %d\n", number);

    while (!validInput2) {
        printf("Please enter a second number: ");
        fgets(input2, sizeof(input2), stdin);

        // Convert input to a number
        if (sscanf(input2, "%d", &number2) == 1 && number2 >= 1) {
            validInput2 = 1; // Input is a valid number
        } else {
            printf("Invalid input. Please enter a valid number.\n");
        }
    }


    printf("The decision of the numbers is %d.\n", number/number2);
    return 0;
}

int validation(char input[50]) {
    int number;
    if (sscanf(input, "%d", &number) == 1) {
        return number;
    } else {
        return 0;
    }
}