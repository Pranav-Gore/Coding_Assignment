package com.example.myjavaprograms.operator;


public class BooleanOperators {
    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        
        // Logical AND (&)
        boolean andResult = a & b;
        System.out.println(a + " & " + b + " = " + andResult);
        
        // Logical OR (|)
        boolean orResult = a | b;
        System.out.println(a + " | " + b + " = " + orResult);
        
        // Logical NOT (!)
        boolean notA = !a;
        boolean notB = !b;
        System.out.println("!" + a + " = " + notA);
        System.out.println("!" + b + " = " + notB);
    }
}
