#include <stdio.h>
//Program to find the average of three numbers:
int main()
 {
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("Average: %.2f\n", (num1 + num2 + num3) / 3); 
    return 0; 
}
