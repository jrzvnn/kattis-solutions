package kattis;
import java.util.Scanner;

public class beavergnaw {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	
		while(true) {
			double D = scan.nextInt();
			double V = scan.nextInt();
			
			if (D == 0 && V == 0)
				break;
			
			double volume = Math.PI * Math.pow((D / 2), 2) * D;
			double left = volume - V;
			double largeCones = Math.PI * Math.pow((D / 2), 2) * (D / 3);
			double shape = left - largeCones;
			double cylinder = shape * 1.5;
			double radius = (Math.pow((cylinder / (2 * Math.PI)), (1.0 / 3.0)));
			
			
			System.out.printf("%.9f\n", radius * 2);
		}
		
		scan.close();
	}
}
