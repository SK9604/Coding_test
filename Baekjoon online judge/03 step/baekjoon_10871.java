// Question URL: https://www.acmicpc.net/source/10871
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
public class baekjoon_10871 {
	public static void main(String[] args) throws IOException {
		BufferedReader inbr = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter inbw = new BufferedWriter(new OutputStreamWriter(System.out));
		String[] sc = inbr.readLine().split(" ");
		int n = Integer.parseInt(sc[0]);
		int x = Integer.parseInt(sc[1]);
		String [] word = new String[n];
		word = inbr.readLine().split(" ");
		int [] a = new int[n];
		for(int i=0;i<n;i++) {
			a[i] = Integer.parseInt(word[i]);
			if(a[i]<x) {
				inbw.write(a[i]+" ");
			}		
		}
		inbr.close();
		inbw.flush();
		inbw.close();
	}
}
