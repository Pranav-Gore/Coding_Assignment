package com.example.myjavaprograms.myfirsthelloworldapplication.controlstatement.programs;


import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Declaration of variables
        int num, binaryNum, decimalNum = 0, base = 1, rem;

        System.out.println("Enter a binary number (combination of 0s and 1s): ");
        num = scanner.nextInt(); // accept the binary number (0s and 1s)

        binaryNum = num; // assign the binary number to the binaryNum variable

        while (num > 0) {
            rem = num % 10; // get the rightmost digit (remainder)
            decimalNum = decimalNum + rem * base;
            num = num / 10; // remove the rightmost digit from the binary number
            base = base * 2;
        }

        System.out.println("The binary number is: " + binaryNum);
        System.out.println("The decimal number is: " + decimalNum);

        scanner.close();
    }
}
