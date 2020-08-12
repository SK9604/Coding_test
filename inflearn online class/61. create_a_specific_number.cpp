#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int n, m, a[11], cnt = 0;

void DFS(int L, int sum){
	if(L == n+1){
		if(sum == m) cnt++;
	}
	else{
		DFS(L+1, sum+a[L-1]);
		DFS(L+1, sum);
		DFS(L+1, sum-a[L-1]);
	}
}

int main() {
	cin>>n>>m;
	for(int i =0; i<n; i++){
		cin>>a[i];
	}
	DFS(1,0);
	if(cnt == 0) cout<<-1;
	else cout<<cnt;
	return 0;
}
