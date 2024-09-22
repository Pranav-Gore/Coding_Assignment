package com.example.myjavaprograms.operator;

public class LogicalOperators {
    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        
        // Logical AND (&&)
        boolean andResult = a && b;
        System.out.println(a + " && " + b + " = " + andResult);
        
        // Logical OR (||)
        boolean orResult = a || b;
        System.out.println(a + " || " + b + " = " + orResult);
        
        // Logical NOT (!)
        boolean notResultA = !a;
        boolean notResultB = !b;
        System.out.println("!" + a + " = " + notResultA);
        System.out.println("!" + b + " = " + notResultB);
        
        // Combined example
        boolean combinedResult = (a && b) || !b;
        System.out.println("(" + a + " && " + b + ") || !" + b + " = " + combinedResult);
    }
}
