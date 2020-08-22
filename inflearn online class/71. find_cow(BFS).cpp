#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;
int ch[10001], d[3] = {1,-1,5};

int main() {
	int s, e, x, pos;
	queue <int> Q;
	cin>>s>>e;
	ch[s] = 1;
	Q.push(s);
	while(!Q.empty()){
		x= Q.front();
		Q.pop();
		for(int i = 0; i<3; i++){
			pos = x+d[i];
			if(pos<=0 || pos>10000) continue;
			if(pos == e){
				cout<<ch[x];
				exit(0);
			}
			if(ch[pos]==0){
				ch[pos] = ch[x]+1;
				Q.push(pos);
			}
		}
	}
	return 0;
}
