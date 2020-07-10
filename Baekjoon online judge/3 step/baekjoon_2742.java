// Question URL: https://www.acmicpc.net/source/2742
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
public class baekjoon_2742 {
	public static void main(String[] args) throws IOException {
		BufferedReader inbr = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter inbw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(inbr.readLine());
		
		for(int i=T;i>0;i--) {
			System.out.println(i);
		}
		inbr.close();
		inbw.flush();
		inbw.close();
	}
}
