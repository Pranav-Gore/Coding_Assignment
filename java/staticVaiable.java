package helloworld.javaprograms.javaVariables;

public class staticVaiable {
	
	static int staticVar;
	
	public void display() {
		System.out.println("Static Variable: " + staticVar);
	}

	public static void main(String[] args) {
		staticVaiable.staticVar = 5;
		staticVaiable obj1 = new staticVaiable();
		staticVaiable obj2 = new staticVaiable();
		
		obj1.display();//Static Variable: 5
		obj2.display();//Static Variable: 5
		
		staticVaiable.staticVar = 10;
		obj1.display();//Static Variable: 10
		obj2.display();//Static Variable: 10

	}

}
