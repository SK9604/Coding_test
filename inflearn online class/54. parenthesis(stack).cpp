#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main() {
	int cnt = 0;
	string p;
	stack <char>  s;
	cin>>p;
	for(int i = 0; i<p.length(); i++){
		s.push(p[i]);
	}
	while(!s.empty()){
		if(s.top()== ')'){
			cnt++;
		}
		else {
			cnt--;
			if(cnt<0) break;
		}
		s.pop();
	}
	if(cnt == 0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
