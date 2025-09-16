#include <stdio.h>

int main() {
    float a, b;
    int choice;
    scanf("%f %f", &a, &b);
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Addition: %.2f\n", a + b); break;
        case 2: printf("Subtraction: %.2f\n", a - b); break;
        case 3: printf("Multiplication: %.2f\n", a * b); break;
        case 4:
            if (b != 0)
                printf("Quotient: %.2f\n", a / b);
            else
                printf("Division: Zero as divisor is not valid!\n");
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
