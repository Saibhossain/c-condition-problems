#include <stdio.h>

int main() {
    double a, b;
    int choice, caseChoice;

    scanf("%lf %lf", &a, &b);
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Addition: %.2f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.2f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.2f\n", a * b);
            break;
        case 4:
            printf("Enter Case (1=Quotient, 2=Remainder): ");
            scanf("%d", &caseChoice);
            if (caseChoice == 1) {
                if (b != 0)
                    printf("Quotient: %.2f\n", a / b);
                else
                    printf("Division: Zero as divisor is not valid!\n");
            } else if (caseChoice == 2) {
                if ((int)b != 0)
                    printf("Remainder: %d\n", (int)a % (int)b);
                else
                    printf("Division: Zero as divisor is not valid!\n");
            } else {
                printf("Invalid Case\n");
            }
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
