import java.util.Scanner;

public class Pyramid {
	static void errorCheck (int n){
		if (n < 1){
			System.out.print("Please enter a positive integer.");
			return;
		}
	}
	public static void main (String[] args){
		Scanner scan = new Scanner(System.in);

		int rows; 
		System.out.print("Enter number of Rows: ");
		rows = scan.nextInt();

		errorCheck(rows);

		int temp = rows;
		for (int a=1; a<= rows; a++){
			//for space
			for (int b=0; b<temp; b++){
				System.out.print(" ");
			}
			temp--;
			//for star
			for (int c=0; c<a+(a-1); c++){
				System.out.print("*");
			}
			System.out.print("\n");
		}
	}
}