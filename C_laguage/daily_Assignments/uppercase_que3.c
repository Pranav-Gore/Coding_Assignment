#include <stdio.h>

int main() {
    char str[] = "hello, world!";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase String: %s\n", str);
    return 0;
}
