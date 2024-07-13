package helloworld.javaprograms.javaVariables;

public class finalStaticVariable {
	
	//final static variable
	static final int FINAL_STATIC_VAR = 100;
	
	public void display() {
		System.out.println("Final Static Variable : "+FINAL_STATIC_VAR);
	}

	public static void main(String[] args) {
		
		finalStaticVariable obj1 = new finalStaticVariable();
		finalStaticVariable obj2 = new finalStaticVariable();
		
		obj1.display();//Final Static Variable : 100
		obj2.display();//Final Static Variable : 100

	}

}
