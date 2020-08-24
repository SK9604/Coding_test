#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int a;
	priority_queue<int> pQ;
	while(1){
		cin>>a;
		int b = -a;
		if(a == -1) break;
		if(a == 0){
			if(pQ.empty()) cout<<"-1\n";
			else{
				cout<<-pQ.top();
				pQ.pop();
			}
		}
		else pQ.push(b);
	}
	return 0;
}
