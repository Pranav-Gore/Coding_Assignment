//program1:This program demonstrates initializing an array with three elements and printing them out
// date: 24 march 2024
// author: pranav s gore

#include<stdio.h>
int main(){

    //Declare an integer array with a size of 5 and initialize the first three elements
    int arr[5]={10,20,30};

    printf("Original array: ");
    printf("%d%d%d\n",arr[0],arr[1],arr[2]);//Print the original array elements

    return 0;
}

// expected output:
        // Original array: 102030