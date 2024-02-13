#include <stdio.h>

int main() 
{
    printf("Odd numbers from 1 to 10 using a while loop:\n");
    int i = 1;
    while (i <= 10) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
