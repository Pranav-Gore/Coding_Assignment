//program1:This program demonstrates initializing an float array with five elements and printing them out
// date: 24 march 2024
// author: pranav s gore

#include <stdio.h>

int main() {
    // Declare and initialize an float array with floating-point values
    // Note: Initialization with floating-point values will result in truncation
    float arr[5] = {1.0, 2.0, 3.5, 0.6, 9.5};

    // Print each element of the array
    printf("%f\n", arr[0]);
    printf("%f\n", arr[1]);
    printf("%f\n", arr[2]);
    printf("%f\n", arr[3]);
    printf("%f\n", arr[4]);

    return 0;
}


// expected output:
                // 10
                // 20
                // 30
                // 40
                // 50