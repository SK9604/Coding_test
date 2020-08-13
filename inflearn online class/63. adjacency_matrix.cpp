#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main() {
	int n, m, x, y, v;
	cin>>n>>m;
	vector <vector<int> > map (n+1, vector <int> (n+1));
	for(int i = 0; i<m; i++){
		cin>>x>>y>>v;
		map[x][y] = v;
	}
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cout<<map[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
