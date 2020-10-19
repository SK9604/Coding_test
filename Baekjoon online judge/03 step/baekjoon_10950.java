// Question URL: https://www.acmicpc.net/source/10950
import java.util.Scanner;
public class baekjoon_10950 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int A,B;
		int [] S = new int[T];
		for(int i = 0; i<T; i++) {
			A = sc.nextInt();
			B = sc.nextInt();
			S[i] = A+B;
		}
		for(int i = 0; i<T; i++) {
			System.out.println(S[i]);
		}
		
	}
}
