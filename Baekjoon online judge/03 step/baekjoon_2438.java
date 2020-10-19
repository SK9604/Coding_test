// Question URL: https://www.acmicpc.net/source/2438
import java.util.Scanner;
public class baekjoon_2438 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		for(int i = 0; i<a; i++) {
			for(int j = -1; j<i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
