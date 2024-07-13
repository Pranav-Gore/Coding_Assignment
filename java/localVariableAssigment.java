package helloworld.javaprograms.javaVariables;

public class localVariableAssigment {
    
    public void display() {
        // Local variable
        int localCount = 0;
        
        localCount++;
        
        System.out.println("Local Count: " + localCount);
    }

    public static void main(String[] args) {
    	localVariableAssigment obj = new localVariableAssigment();
        
        obj.display(); // Local Count: 1
        obj.display(); // Local Count: 1
        obj.display(); // Local Count: 1
    }
}

