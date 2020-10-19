// Question URL: https://www.acmicpc.net/source/14681
import java.util.Scanner;
public class baekjoon_14681 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		if(A>0&&B>0) {
			System.out.println("1");
		}else if(A>0&&B<0){
			System.out.println("4");
		}else if(A<0&&B>0) {
			System.out.println("2");
		}else {
			System.out.println("3");
		}
		
	}
}
