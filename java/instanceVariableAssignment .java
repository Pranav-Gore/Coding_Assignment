package helloworld.javaprograms.javaVariables;

public class instanceVariableAssignment {
    
    // Instance variable
    int instanceCount = 0;
    
    public void display() {
        instanceCount++;
        
        System.out.println("Instance Count: " + instanceCount);
    }

    public static void main(String[] args) {
    	instanceVariableAssignment obj1 = new instanceVariableAssignment();
        instanceVariableAssignment obj2 = new instanceVariableAssignment();
        
        System.out.println("For Object 1:");
        obj1.display(); // Instance Count: 1
        obj1.display(); // Instance Count: 2
        
        System.out.println("For Object 2:");
        obj2.display(); // Instance Count: 1
        obj2.display(); // Instance Count: 2
    }
}


