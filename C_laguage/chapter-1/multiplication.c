#include <stdio.h>
int main()
{
    int a, b, multi;

    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter second number\n");
    scanf("%d", &b);

    multi = a * b;
    printf("Multiplication %d\n", multi);

    return 0;
}