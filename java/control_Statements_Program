package com.example.myjavaprograms.myfirsthelloworldapplication.controlstatement.programs;


public class ArmstrongNumber {
    public static void main(String[] args) {
        int n = 153; // Example: Number to check for Armstrong property
        int sum = 0;
        int temp = n;

        // Calculate sum of cubes of digits
        while (n > 0) {
            int r = n % 10; // Extract the last digit
            sum = sum + (r * r * r); // Calculate cube and add to sum
            n = n / 10; // Remove the last digit
        }

        // Check if the original number is equal to the sum of cubes
        if (temp == sum) {
            System.out.println(temp + " is an Armstrong number");
        } else {
            System.out.println(temp + " is not an Armstrong number");
        }
    }
}
