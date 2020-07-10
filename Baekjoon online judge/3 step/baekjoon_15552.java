// Question URL: https://www.acmicpc.net/source/15552
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
public class baekjoon_15552 {
	public static void main(String[] args) throws IOException {
		BufferedReader inbr = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter inbw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(inbr.readLine());
		
		for(int i=0;i<T;i++) {
			String[] word = inbr.readLine().split(" ");
			inbw.write(Integer.parseInt(word[0])+Integer.parseInt(word[1])+"\n");
		}
		inbr.close();
		inbw.flush();
		inbw.close();
	}
}
