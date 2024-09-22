package com.example.myjavaprograms.myfirsthelloworldapplication.controlstatement.programs;

public class BinaryToDecimalNumber {


    public static void main(String[] args) {
       
        int binaryNum = 101; 

        
        int decimalNum = binaryToDecimal(binaryNum);

        
        System.out.println("The binary number is: " + binaryNum);
        System.out.println("The decimal number is: " + decimalNum);
    }

    
    public static int binaryToDecimal(int binaryNum) {
        int decimalNum = 0;
        int base = 1; // Base for binary (2^0 = 1 initially)

        while (binaryNum > 0) {
            int rem = binaryNum % 10; // Get the rightmost digit (remainder)
            decimalNum = decimalNum + rem * base;
            binaryNum = binaryNum / 10; // Remove the rightmost digit
            base = base * 2; // Increase base for next binary digit (2^1, 2^2, ...)
        }

        return decimalNum;
    }
}
