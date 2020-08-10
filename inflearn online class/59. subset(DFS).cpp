#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int n, ch[11];
void DFS(int x){
	if(x == n+1){
		for(int i = 0; i<n; i++){
			if(ch[i] == 1) cout<<i+1<<' ';
		}
		cout<<'\n';
	}
	else{
		ch[x-1] = 1;
		DFS(x+1);
		ch[x-1] = 0;
		DFS(x+1);
	}
}
int main() {
	cin>>n;
	DFS(1);
	return 0;
}
