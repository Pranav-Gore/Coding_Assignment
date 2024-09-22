package com.example.myjavaprograms.operator;


public class UnaryOperators {
    public static void main(String[] args) {
        int num = 5;
        
        // Unary plus
        int plusResult = +num;
        System.out.println("Unary plus: +" + num + " = " + plusResult);
        
        // Unary minus
        int minusResult = -num;
        System.out.println("Unary minus: -" + num + " = " + minusResult);
        
        // Increment operator (prefix)
        int prefixIncrement = ++num;
        System.out.println("Prefix increment: ++num = " + prefixIncrement);
        
        // Decrement operator (prefix)
        int prefixDecrement = --num;
        System.out.println("Prefix decrement: --num = " + prefixDecrement);
        
        // Increment operator (postfix)
        int postfixIncrement = num++;
        System.out.println("Postfix increment: num++ = " + postfixIncrement + " (num is now " + num + ")");
        
        // Decrement operator (postfix)
        int postfixDecrement = num--;
        System.out.println("Postfix decrement: num-- = " + postfixDecrement + " (num is now " + num + ")");
        
        // Logical complement operator
        boolean bool = true;
        boolean logicalComplement = !bool;
        System.out.println("Logical complement: !" + bool + " = " + logicalComplement);
    }
}
