package kattis;
import java.util.Scanner;

public class nastyhacks {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		while(n != 0) {
			
			int r = scan.nextInt();
			int e = scan.nextInt();
			int c = scan.nextInt();
			
			if (e - c > r) {
				
				System.out.println("advertise");
			}
			else if (e - c < r) {
				
				System.out.println("do not advertise");
			}
			else {
				
				System.out.println("does not matter");
			}
			
			n--;
		}
		
		scan.close();
	}
}
