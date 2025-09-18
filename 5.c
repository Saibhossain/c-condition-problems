#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num > 0 && (num & (num - 1)) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
