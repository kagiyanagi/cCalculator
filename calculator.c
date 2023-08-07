#include <stdio.h>
#include <string.h>

void reopen();
void calculate(char operation[], char operator);

int main() {
    int calculationChoice;

    printf("\nChoose what you want to calculate.\n\n");
    printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: No choice, Exit!\n\n");
    printf("Enter your choice: ");
    scanf("%d", &calculationChoice);
    printf("\n\n");

    switch (calculationChoice) {
        case 1:
            calculate("Addition", '+');
            break;
        case 2:
            calculate("Subtraction", '-');
            break;
        case 3:
            calculate("Multiplication", '*');
            break;
        case 4:
            calculate("Division", '/');
            break;
        case 5:
            printf("No choice?? Ok, then bye.\n");
            break;
        default:
            printf("Wrong choice. Please enter between 1, 2, 3, 4, or 5.\n");
            break;
    }

    reopen();

    return 0;
}

void calculate(char operation[], char operator) {
    float calculationValue1;
    float calculationValue2;

    printf("Ok, you chose %s.\n", operation);
    printf("Enter your first Number: ");
    scanf("%f", &calculationValue1);
    printf("Enter your second Number: ");
    scanf("%f", &calculationValue2);

    switch (operator) {
        case '+':
            printf("\n%.8g %c %.8g = %.8g\n", calculationValue1, operator, calculationValue2, calculationValue1 + calculationValue2);
            break;
        case '-':
            printf("\n%.8g %c %.8g = %.8g\n", calculationValue1, operator, calculationValue2, calculationValue1 - calculationValue2);
            break;
        case '*':
            printf("\n%.8g %c %.8g = %.8g\n", calculationValue1, operator, calculationValue2, calculationValue1 * calculationValue2);
            break;
        case '/':
            if (calculationValue2 != 0) {
                printf("\n%.8g %c %.8g = %.8g\n", calculationValue1, operator, calculationValue2, calculationValue1 / calculationValue2);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
}

void reopen() {
    char yn;
    printf("\nWould you like to use it one more time? \n");
    printf("Enter 'y' for Yes and 'n' for No: ");
    scanf(" %c", &yn);
    printf("\n");

    if (yn == 'y') {
        main();
    } else if (yn == 'n') {
        printf("Ok, Bye then.\n");
    } else {
        printf("Wrong choice.\n");
        printf("Only lowercase letters are accepted.\n");
    }
}
