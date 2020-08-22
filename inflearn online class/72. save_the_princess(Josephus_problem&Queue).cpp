#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
int ch[1001];

int main() {
	int n, k;
	queue <int> Q;
	cin>>n>>k;
	for(int i = 1; i<=n; i++){
		Q.push(i);
	}
	while(!Q.empty()){
		for(int i = 1; i<k; i++){
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		if(Q.size() == 1){
			cout<<Q.front();
			Q.pop();
		} 
	}
	return 0;
}
