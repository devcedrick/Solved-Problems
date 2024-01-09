import java.util.Scanner;

public class Watermelon{
	boolean evenCheck (int c){
		if (c % 2 == 0){
			return true;
		}
		return false;
	}

	boolean divideCheck (int t){
		int cnt = 0;
		for(int i=1; i<=t; i++){
			if (evenCheck(i)){
				int diff = t - i;
				if (evenCheck(diff)){
					cnt++;
				}
			}
		}
		
		if (cnt > 0){
			return true;
		}
		return false;
	}

	public static void main (String args[]){
		Scanner scan = new Scanner(System.in);
		int x = scan.nextInt();

		if (x < 1 || x > 100){
			System.exit(1);
		}

		Watermelon func = new Watermelon();

		if (func.divideCheck(x)){
			System.out.print("YES");
		} else {
			System.out.print("NO");
		}

		scan.close();

	}
}