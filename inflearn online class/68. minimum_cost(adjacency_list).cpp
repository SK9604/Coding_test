#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int ch[30], n, cost = 2147000000;
vector <pair<int,int> > map[30];

void DFS(int v, int sum){
	if(v == n){
		if(sum<cost) cost = sum;
	}
	else{
		for(int i = 0; i<map[v].size(); i++){
			if(ch[map[v][i].first] == 0){
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum+ map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main() {
	pair<int, int> p;
	int m, a, b, c;
	cin>>n>>m;
	for(int i = 1; i<=m; i++){
		cin>>a>>b>>c;
		map[a].push_back(make_pair(b,c));
	}
	ch[1] = 1;
	DFS(1,0);
	cout<<cost;
	return 0;
}
