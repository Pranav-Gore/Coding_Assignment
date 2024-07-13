package helloworld.javaprograms.javaVariables;

public class instanceVariable {
	
	//Instance variable
	int instanceVar;
	
	public instanceVariable(int instanceVar) {
		this.instanceVar = instanceVar;
	}
	
	public void display() {
		System.out.println("Instance Variable: "+instanceVar);
	}

	public static void main(String[] args) {
		instanceVariable obj1 = new instanceVariable(10);
		instanceVariable obj2 = new instanceVariable(20);
		
		obj1.display();//Instance Variable: 10
		obj2.display();//Instance Variable: 20
	}

}
