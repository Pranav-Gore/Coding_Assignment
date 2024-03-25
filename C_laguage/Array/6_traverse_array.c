//program1:Traverse the array and print each element
// date: 25 march 2024
// author: pranav s gore
#include <stdio.h>

int main() {
    // Declare and initialize a double array with floating-point values
    int arr[5] = {1, 2, 3, 4, 9};

    // Traverse the array and print each element
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

    // expected output :
    //             1
    //             2
    //             3
    //             4
    //             9