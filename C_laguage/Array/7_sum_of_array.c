//program1:Traverse the array and add each element to the sum
// date: 25 march 2024
// author: pranav s gore
#include <stdio.h>

int main() {
    // Declare and initialize a double array with floating-point values
    int arr[5] = {45,7,65,43,02};
    
    int sum = 0;

    // Traverse the array and add each element to the sum
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}


// expected output:
//             Sum of array elements: 162