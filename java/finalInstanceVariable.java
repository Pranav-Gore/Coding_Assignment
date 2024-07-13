package helloworld.javaprograms.javaVariables;

public class finalInstanceVariable {
	
	//final instance variable
	final int finalInstanceVar;
	
	//constructor to initialize final instance variable
	public finalInstanceVariable(int finalInstanceVar) {
		this.finalInstanceVar = finalInstanceVar;
	}
	
	public void display() {
		System.out.println("Final Instance Variable : "+finalInstanceVar);
	}

	public static void main(String[] args) {
		
		finalInstanceVariable obj1 = new finalInstanceVariable(10);
		finalInstanceVariable obj2 = new finalInstanceVariable(20);
		
		obj1.display();//Final Instance Variable : 10
		obj2.display();//Final Instance Variable : 20
		
	}

}
