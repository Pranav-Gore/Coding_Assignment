//program1:This program demonstrates initializing an double array with five elements and printing them out
// date: 24 march 2024
// author: pranav s gore

#include <stdio.h>

int main() {
    // Declare and initialize an double array with floating-point values
    // Note: Initialization with floating-point values will result in truncation
    double arr[5] = {13.20, 24.07, 38.57, 40.86, 59.59};

    // Print each element of the array
    printf("%.2f\n", arr[0]);
    printf("%.2f\n", arr[1]);
    printf("%.2f\n", arr[2]);
    printf("%.2f\n", arr[3]);
    printf("%.2f\n", arr[4]);

    return 0;
}


// expected output:
                // 10
                // 20
                // 30
                // 40
                // 50