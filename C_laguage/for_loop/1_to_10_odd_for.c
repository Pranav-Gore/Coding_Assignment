#include <stdio.h>

int main() {
    printf("Odd numbers from 1 to 10 using a for loop:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
