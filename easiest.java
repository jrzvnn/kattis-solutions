package kattis;
import java.util.Scanner;

public class easiest {
	
	public static int getdigits(int n) {
		int sum = 0, rem = 0;
		
		while (n > 0) {
			rem = n % 10;
			sum = sum + rem;
			n = n / 10;
		}
		
		return sum;
	}
		
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			int num = scan.nextInt();
			if (num == 0)
				break;
			
			int m = 11;
			while (getdigits(num) != getdigits(num * m)) {
				m++;
			}
			
			System.out.println(m);
		}
		
		scan.close();
	}
	
}