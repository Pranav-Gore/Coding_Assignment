package helloworld.javaprograms.javaVariables;

public class staticVariableAssignment {
    
    // Static variable
    static int staticCount = 0;
    
    public void display() {
        staticCount++;
        
        System.out.println("Static Count: " + staticCount);
    }

    public static void main(String[] args) {
    	staticVariableAssignment obj1 = new staticVariableAssignment();
    	staticVariableAssignment obj2 = new staticVariableAssignment();
        
        System.out.println("For Object 1:");
        obj1.display(); // Static Count: 1
        obj1.display(); // Static Count: 2
        
        System.out.println("For Object 2:");
        obj2.display(); // Static Count: 3
        obj2.display(); // Static Count: 4
    }
}



