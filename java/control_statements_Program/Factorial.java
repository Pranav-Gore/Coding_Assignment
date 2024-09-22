package com.example.myjavaprograms.myfirsthelloworldapplication.controlstatement.programs;


public class Factorial {
    public static void main(String[] args) {
        int number = 5;
        long factorial = 1;

        for (int i = 1; i <= number; i++) {
            factorial *= i;
            factorial=factorial*i;
            
        }

        System.out.println("Factorial of " + number + " is: " + factorial);
    }
}
