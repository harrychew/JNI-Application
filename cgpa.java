// cgpa.java

import java.util.Scanner;

class cgpa {
    public native String checkCGPA1();
	public native String checkCGPA2();

    public static void main(String[] args) {
        int choice;
		double result;
        
		Scanner input = new Scanner(System.in);
		//Select either Diploma or Degree
		System.out.printf("Please choose your qualification: 1. Diploma 2. Degree \n");
		choice = input.nextInt();
		if (choice == 1){
			
			cgpa p = new cgpa();
			String reply = p.checkCGPA1();
			System.out.println(reply);
			
			
			
		}else if (choice == 2){
			
			
			cgpa b = new cgpa();
			String reply1 = b.checkCGPA2();
			System.out.println(reply1);
			
		}
		else{
			System.out.printf("Please try again!");
		}
		
	}
	static{
			System.loadLibrary("Diploma");
			System.loadLibrary("Degree");
		}
}
