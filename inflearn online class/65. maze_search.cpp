#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int map[8][8], ch[8][8];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt = 0;
void DFS(int x, int y){
	if(x == 7 && y == 7){
		cnt++;
	}
	else{
		for(int i = 0; i<4; i++){
			int xx = x+dx[i];
			int yy = y+dy[i];
			if(xx<1 || xx>7 || yy<1 || yy>7) continue;
			if(map[xx][yy] == 0 && ch[xx][yy] == 0){
				ch[xx][yy] = 1;
				DFS(xx,yy);
				ch[xx][yy] = 0;
			}
		}
	}
}

int main() {
	int x;
	for(int i = 1; i<=7; i++){
		for(int j = 1; j<=7; j++){
			cin>>x;
			map[i][j] = x;
		}
	}
	ch[1][1] = 1;
	DFS(1,1);
	cout<<cnt;
	return 0;
}
