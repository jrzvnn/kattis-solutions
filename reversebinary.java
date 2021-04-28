package kattis;
import java.util.Scanner;

public class reversebinary {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int dec = scan.nextInt();
		int[] bin = new int[10];
		int i = 0, k = 0, dec2 = 0;
		
		while (dec > 0){
			bin[i++] = (dec % 2);
			dec = dec / 2;
		}
		--i;
	
		for (int j = i; j >= 0; j--) {
			dec2 += (bin[j] * Math.pow(2, k++));
		}
		
		System.out.println(dec2);
	
		scan.close();
	}
}
