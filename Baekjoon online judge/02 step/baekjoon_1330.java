// Question URL: https://www.acmicpc.net/source/1330
import java.util.Scanner;
public class baekjoon_1330 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		if(A>B) {
			System.out.println(">");
		}else if(A<B) {
			System.out.println("<");
		}else {
			System.out.println("==");
		}
		
	}
}
