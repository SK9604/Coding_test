// Question URL: https://www.acmicpc.net/source/2884
import java.util.Scanner;
public class baekjoon_2884 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		if(A == 0) {
			A = 24;
		}
		int a = (A*60+B-45)/60;
		if(a==24) {
			a = 0;
		}
		System.out.print(a+" ");
		System.out.println((A*60+B-45)%60);
		
	}
}
