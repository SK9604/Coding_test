// Question URL: https://www.acmicpc.net/source/2588
import java.util.Scanner;
public class baekjoon_2588 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int b1 = B/100;
		int b2 = (B-b1*100)/10;
		int b3 = (B-b1*100-b2*10);
		System.out.println(A*b3);
		System.out.println(A*b2);
		System.out.println(A*b1);
		System.out.println(A*B);
		
	}
}
