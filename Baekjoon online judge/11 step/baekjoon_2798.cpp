#include <iostream>
#include <algorithm> 
using namespace std;
#define MAX 100
int n, m;
int card[MAX];
int ans;

void dfs(int check, int cnt, int sum){
	if(cnt == 3){ 
		if(sum<=m) { 
			ans = max(sum, ans); 
		}
		return;
	}
	if(check>=n||sum>m) return; 
	dfs(check+1, cnt+1, sum+card[check]); 
	dfs(check+1, cnt, sum);
}
int main(){
	cin>>n>>m;
	for(int i = 0; i<n; i++){
		cin>>card[i];
	}
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
