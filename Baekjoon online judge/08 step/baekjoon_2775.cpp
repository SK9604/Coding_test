// Question URL: https://www.acmicpc.net/problem/2775
#include <iostream>
using namespace std;

int main() {
	int t, k, n;
	int p [15][15];
	for(int i = 1; i<15; i++){
		p[0][i] = i;
	}
	for(int i = 1; i<15; i++){
		for(int j = 1; j<15; j++){
			if(j == 1) p[i][j] = 1;
			else p[i][j] = p[i-1][j] + p[i][j-1];
		}
	}
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>k>>n;
		cout<<p[k][n]<<'\n';
	}
	return 0;
}
