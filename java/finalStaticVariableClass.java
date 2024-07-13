package helloworld.javaprograms.javaVariables;

public class finalStaticVariableClass {
	
	//final static variable
	static final int FINAL_STATIC_VAR = 100;
	
	public void display() {
		System.out.println("Final static variable (from instance method): " + FINAL_STATIC_VAR);
	}
	

	public static void main(String[] args) {
		//Accessing the final static variable directly using the class name
		System.out.println("Final static variable (direct access): " + finalStaticVariableClass.FINAL_STATIC_VAR);
		
		finalStaticVariableClass obj1 = new finalStaticVariableClass();
		
		obj1.display();
		
		
	}

}
