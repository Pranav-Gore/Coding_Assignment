package helloworld.javaprograms;

class demo2{
	
	int iNo;
	
	demo2(){	//constructor
		iNo=30;
	}
	public void fun1() {
		System.out.printf("value of iNo = %d\n",iNo);
	    System.out.println("Inside Demo Class and inside fun function");
	}
}

public class classobject2 {
	
	public static void main(String args[]) {
		
		demo2 obj2 = new demo2();
		obj2.fun1();
	}
}

