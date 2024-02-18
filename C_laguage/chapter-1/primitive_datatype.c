#include <stdio.h>

int main() {

    char charType = 'A';
    short shortType = 10;
    int intType = 100;
    long longType = 1000;
    long long longLongType = 10000;

    float floatType = 3.14f;
    double doubleType = 3.14159;
    long double longDoubleType = 3.14159265358979323846L;

    printf("Character type: %c\n", charType);
    printf("Short type: %hd\n", shortType);
    printf("Int type: %d\n", intType);
    printf("Long type: %ld\n", longType);
    printf("Long long type: %lld\n", longLongType);
    printf("Float type: %.2f\n", floatType);
    printf("Double type: %.5lf\n", doubleType);
    printf("Long double type: %.15Lf\n", longDoubleType);

    return 0;
}
