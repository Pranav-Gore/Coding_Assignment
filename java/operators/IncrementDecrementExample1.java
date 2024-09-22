package com.example.myjavaprograms.operator;

public class IncrementDecrementExample1 {
    public static void main(String[] args) {
        // Example 1: Pre-increment and Post-increment
        int x = 1;
        System.out.println(x);   
        System.out.println(++x); 
        System.out.println(x++); 
        System.out.println(x);   

        // Example 2: Another set with different initial value
        x = 2;
        System.out.println(x);   
        System.out.println(x++); 
        System.out.println(x);   
    }
}


//1,1,2,2
//2,3,3
