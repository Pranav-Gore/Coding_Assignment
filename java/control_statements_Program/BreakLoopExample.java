package com.example.myjavaprograms.myfirsthelloworldapplication.controlstatement.programs;

public class BreakLoopExample {
    public static void main(String[] args) {
        int i = 0;
        while (true) {
            System.out.println(i);
            i++;
           if (i >= 5) {
               break;  
            }
        }
    }
}
