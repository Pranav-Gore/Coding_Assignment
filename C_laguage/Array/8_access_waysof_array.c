//program 8:create a simple array and access its elements using diffrent ways
// date : 26-3-2024
// author:pranav gore

#include<stdio.h>
int main(){

    int arr[5]={11,12,13,14,15};

    //accessing elements using subscript - way 1 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    // accessing elements using subscript(alternate) - way 2 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",i[arr]);
    }
    printf("\n");

    // accessing elements using pointer - way 3 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
    
    // accessing elements using pointer(alternate) - way 4 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(i+arr));
    }
    printf("\n");

    return 0;
}

// expected output:
                // 11      12      13      14      15
                // 11      12      13      14      15
                // 11      12      13      14      15
                // 11      12      13      14      15
