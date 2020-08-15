#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int n, m, cnt = 0;
int map[21][21];
int ch[21];

void DFS(int v){
	if(v == n) {
		cnt++;
		return;
	}
	else{
		for(int i = 1; i<=n; i++){
			if(map[v][i] == 1 && ch[i] == 0){
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
	
}
int main() {
	int x, y;
	cin>>n>>m;
	for(int i = 0; i<m; i++){
		cin>>x>>y;
		map[x][y] = 1;
	}
	ch[1] = 1;
	DFS(1);
	cout<<cnt;
	return 0;
}
