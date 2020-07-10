// Question URL: https://www.acmicpc.net/source/8393
import java.util.Scanner;
public class baekjoon_8393 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int s=0;
		for(int i = 1; i<=T; i++) {
			s = s+i;
		}
		System.out.println(s);
	}
}
