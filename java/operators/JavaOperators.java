package com.example.myjavaprograms.operator;

public class JavaOperators {
    public static void main(String[] args) {
        // 1) Arithmetic Operators
        int a = 10;
        int b = 5;
        int sum = a + b;
        int diff = a - b;
        int product = a * b;
        int quotient = a / b;
        int remainder = a % b;
        System.out.println("Arithmetic Operators:");
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + diff);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);
        System.out.println("Remainder: " + remainder);

        // 2) Unary Operators
        int c = -a;
        boolean flag = true;
        boolean notFlag = !flag;
        System.out.println("\nUnary Operators:");
        System.out.println("Unary minus: " + c);
        System.out.println("Logical NOT: " + notFlag);

        // 3) Unary Minus Operator
        int d = -a;
        System.out.println("\nUnary Minus Operator:");
        System.out.println("Unary minus: " + d);

        // 4) Increment Operator
        int e = 10;
        e++;
        System.out.println("\nIncrement Operator:");
        System.out.println("Increment: " + e);

        // 5) Decrement Operator
        int f = 10;
        f--;
        System.out.println("\nDecrement Operator:");
        System.out.println("Decrement: " + f);

        // 6) Assignment Operator
        int g = 10;
        g += 5;
        g -= 3;
        System.out.println("\nAssignment Operator:");
        System.out.println("Assignment after += and -=: " + g);
        
       

        // 7) Relational Operators
        boolean isEqual = a == b;
        boolean isNotEqual = a != b;
        boolean isGreater = a > b;
        boolean isLesser = a < b;
        boolean isGreaterOrEqual = a >= b;
        boolean isLesserOrEqual = a <= b;
        System.out.println("\nRelational Operators:");
        System.out.println("Equal: " + isEqual);
        System.out.println("Not Equal: " + isNotEqual);
        System.out.println("Greater: " + isGreater);
        System.out.println("Lesser: " + isLesser);
        System.out.println("Greater or Equal: " + isGreaterOrEqual);
        System.out.println("Lesser or Equal: " + isLesserOrEqual);

        // 8) Logical Operators
        boolean andResult = flag && isNotEqual;
        boolean orResult = flag || isEqual;
        System.out.println("\nLogical Operators:");
        System.out.println("AND: " + andResult);
        System.out.println("OR: " + orResult);

        // 9) Boolean Operator (same as Logical Operators)
        System.out.println("\nBoolean Operators (Logical):");
        System.out.println("AND: " + andResult);
        System.out.println("OR: " + orResult);

        // 10) Bitwise Operators
        int bitwiseAnd = a & b;
        int bitwiseOr = a | b;
        int bitwiseXor = a ^ b;
        System.out.println("\nBitwise Operators:");
        System.out.println("AND: " + bitwiseAnd);
        System.out.println("OR: " + bitwiseOr);
        System.out.println("XOR: " + bitwiseXor);

        // 11) Bitwise Complement Operator
        int bitwiseComplement = ~a;
        System.out.println("\nBitwise Complement Operator:");
        System.out.println("Complement: " + bitwiseComplement);

        // 12) Bitwise OR Operator
        int bitwiseOrResult = a | b;
        System.out.println("\nBitwise OR Operator:");
        System.out.println("Bitwise OR: " + bitwiseOrResult);

        // 13) Bitwise XOR Operator
        int bitwiseXorResult = a ^ b;
        System.out.println("\nBitwise XOR Operator:");
        System.out.println("Bitwise XOR: " + bitwiseXorResult);

        // 14) Bitwise Left Shift Operator
        int leftShift = a << 1;
        System.out.println("\nBitwise Left Shift Operator:");
        System.out.println("Left Shift: " + leftShift);

        // 15) Bitwise Right Shift Operator
        int rightShift = a >> 1;
        System.out.println("\nBitwise Right Shift Operator:");
        System.out.println("Right Shift: " + rightShift);

     
        // 17) Ternary Operator
        int max = (a > b) ? a : b;
        System.out.println("\nTernary Operator:");
        System.out.println("Max: " + max);
        
  
       // 18) instanceof Operator
        String s = "Hello";
        boolean isString = s instanceof String;
        System.out.println("\ninstanceof Operator:");
        System.out.println("Is instance of String: " + isString);

        // 19) new Operator
        String newString = new String("Hello");
        System.out.println("\nnew Operator:");
        System.out.println("New String: " + newString);

        // 20) Cast Operator
        double doubleValue = 10.5;
        int intValue = (int) doubleValue;
        System.out.println("\nCast Operator:");
        System.out.println("Cast double to int: " + intValue);
    }
}
