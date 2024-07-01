package helloworld.javaprograms;

class add{
	int iNo1=10;
	int iNo2=20;
	
	public void sum() {
		System.out.println("Sum is "+(iNo1+iNo2));
	}
}

public class print_class_object4 {

	public static void main(String args[]) {
		add obj4 = new add();
		obj4.sum();
	}
}

