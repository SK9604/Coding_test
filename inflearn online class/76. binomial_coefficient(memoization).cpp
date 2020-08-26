#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
int dy[21][21];

int DFS(int n, int r){
	if(dy[n][r] != 0) return dy[n][r];
	if(r == 0 || n == r) return 1;
	else return dy[n][r] = DFS(n-1, r-1)+DFS(n-1, r);
}
int main() {
	int n,r;
	cin>>n>>r;
	cout<<DFS(n,r);
	return 0;
}
