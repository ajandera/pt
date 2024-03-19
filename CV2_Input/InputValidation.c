#include <stdio.h>
#include <stdlib.h>

int validate(){
    int number;
    char input[50];
    int validInput = 0;
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
    return number;
}


int main() {
    int number = validate();
    printf("You entered: %d\n", number);
    int number2 = validate();
    printf("The decision of the numbers is %d.\n", number/number2);
    return 0;
}