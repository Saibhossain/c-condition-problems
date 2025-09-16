#include <stdio.h>

int main() {
    int digit;
    scanf("%d", &digit);
    char *names[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (digit >= 0 && digit <= 9)
        printf("%s\n", names[digit]);
    else
        printf("Invalid input\n");
    return 0;
}
