#include <stdio.h>

int main() {
    double num1, num2;
    char op;
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch(op) {
        case '+':
            printf("Addition: %.6f\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction: %.6f\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication: %.6f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Division: %.6f\n", num1 / num2);
            else
                printf("Division: Zero as divisor is not valid!\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
