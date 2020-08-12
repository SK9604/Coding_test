#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int n, a[11], total=0;
bool flag = false;
void DFS(int L, int sum){
	if(sum>total/2) return;
	if(flag == true) return;
	if(L == n+1){
		if(sum == total-sum){
			flag = true;
		}
	}
	else{
		DFS(L+1, sum+a[L-1]);
		DFS(L+1, sum);
	}
}
int main() {
	cin>>n;
	for(int i =0; i<n; i++){
		cin>>a[i];
		total+=a[i];
	}
	DFS(1,0);
	if(flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}
