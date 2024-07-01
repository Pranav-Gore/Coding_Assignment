package helloworld.javaprograms;

class details{
	String name = "Pranav";
	int age = 20;
	String address = "Rui-chhatrapati";
	
	public void display() {
		System.out.println("My name is "+name);
		System.out.println("My age is "+age);
		System.out.println("My address is "+address);
	}
}

public class print_class_object5 {
	
	public static void main(String args[]) {
		
		details obj5 = new details();
		obj5.display();
	}

}

