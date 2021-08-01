package kattis;
import java.util.Scanner;

public class simonsays {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
    	int n = scan.nextInt();
    	while(n > -1) {
    		String test1 = "Simon";
    		String test2 = "says";
	    	String s = scan.nextLine();   
		    String[] str = s.split(" ");  
		    if(str[0].compareTo(test1) == 0 && str[1].compareTo(test2) == 0) {
			    for(int i = 2; i < str.length; i++)  { 
			    	System.out.print(str[i] + " ");
			    } 
		    }
			System.out.println();
		    n--;
    	}
		scan.close();
	}
}
