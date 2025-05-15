#include <stdio.h>

int main() {
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Odd numbers up to %d:\n", num);

    for (i = 1; i <= num; i += 2) {
        printf("%d", i);

        
        if (i + 2 <= num) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
