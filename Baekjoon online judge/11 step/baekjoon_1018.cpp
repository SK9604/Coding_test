//Question URL: https://www.acmicpc.net/problem/1018
#include <iostream>
#include <vector>
using namespace std;

int chkb(vector<vector<char> > board, int istart, int jstart){
	int cnt = 0;
	for(int i = istart; i<istart+8; i++){
		for(int j = jstart; j<jstart+8; j++){
			if((i+j)%2 == (istart+jstart)%2){
				if(board[i][j] != 'B') cnt++;
			}
			else{
				if(board[i][j] != 'W') cnt++;
			}
		}
	}
	return cnt;
}
int chkw(vector<vector<char> > board, int istart, int jstart){
	int cnt = 0;
	for(int i = istart; i<istart+8; i++){
		for(int j = jstart; j<jstart+8; j++){
			if((i+j)%2 == (istart+jstart)%2){
				if(board[i][j] != 'W') cnt++;
			}
			else{
				if(board[i][j] != 'B') cnt++;
			}
		}
	}
	return cnt;
}
int main(){
	int n, m, min = 2147000000;
	cin>>n>>m;
	vector <vector<char> > chess (n,vector<char>(m));
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin>>chess[i][j];
		}
	}
	for(int i = 0; i<=n-8; i++){
		for(int j = 0; j<=m-8; j++){
			int tb = chkb(chess, i, j);
			int tw = chkw(chess, i, j);
			if(tb<min) min = tb;
			if(tw<min) min = tw;
		}
	}
	cout<<min;
	return 0;
}

