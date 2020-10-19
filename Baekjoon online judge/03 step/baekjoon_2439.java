// Question URL: https://www.acmicpc.net/source/2439
import java.util.Scanner;
public class baekjoon_2439 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		for(int j = 0; j< a; j++){
			for(int i = a-j-1; i>0; i--) {
				System.out.print(" ");
			}
			for(int i = 0; i<=j; i++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
