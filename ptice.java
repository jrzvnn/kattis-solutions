package kattis;
import java.util.Scanner;

public class ptice {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		String correct = scan.next();
		int count1 = 0 ;
		int count2 = 0;
		int count3 = 0;
		
		
		String adrian[] = {"A", "B", "C"};
		int repeat1 = 100;
		String result1[] = new String[repeat1];
		for(int i = 0, j = 0; i < repeat1 && j < adrian.length; i++, j++) {
		   result1[i] = adrian[j];
		   if(j == adrian.length -1)
		         j = -1;
		}
		
		String bruno[] = {"B", "A", "B", "C"};
		int repeat2 = 100;
		String result2[] = new String[repeat2];
		for(int i = 0, j = 0; i < repeat2 && j < bruno.length; i++, j++) {
		   result2[i] = bruno[j];
		   if(j == bruno.length -1)
		         j = -1;
		}
		
		String goran[] = {"C", "C", "A", "A", "B", "B"};
		int repeat3 = 100;
		String result3[] = new String[repeat3];
		for(int i=  0, j = 0; i < repeat3 && j < goran.length; i++, j++) {
		   result3[i] = goran[j];
		   if(j == goran.length -1)
		         j = -1;
		}
		
		for (int i = 0; i < n; i++) {
	    if (result1[i].equals(correct.substring(i , i + 1)))
	        count1++;
	    if (result2[i].equals(correct.substring(i , i + 1)))
	        count2++;
	    if (result3[i].equals(correct.substring(i , i + 1)))
	        count3++;
	    }
		
		if (count1 > count2 && count1 > count3 ) {
			System.out.println(count1);
			System.out.println("Adrian");
		} else if (count2 > count1 && count2 > count3) {
			System.out.println(count2);
			System.out.println("Bruno");
		} else if (count3 > count1 && count3 > count2) {
			System.out.println(count3);
			System.out.println("Goran");
		} else if (count1 == count2 && count2 == count3) {
			System.out.println(count1);
			System.out.println("Adrian");
			System.out.println("Bruno");
			System.out.println("Goran");
		} else if (count1 == count2 && count1 != count3) {
			System.out.println(count1);
			System.out.println("Adrian");
			System.out.println("Bruno");
		} else if (count1 == count3 && count1 != count2) {
			System.out.println(count1);
			System.out.println("Adrian");
			System.out.println("Goran");
		} else if (count2 == count3 && count2 != count1) {
			System.out.println(count2);
			System.out.println("Bruno");
			System.out.println("Goran");
		}
	
		scan.close();
	}
}
