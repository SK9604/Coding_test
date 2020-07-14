#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, now, pre, pos;
	bool res;
	cin>>n;
	vector <int> jolly(n);
	cin>>pre;
	for(int i = 1; i<n; i++){
		cin>>now;
		pos = abs(pre - now);
		if(pos>0 && pos<n && jolly[pos]==0) jolly[pos]++;
		else{
			cout<<"NO";
			return 0;
		}
		pre = now;
	}
	cout<<"YES";
	return 0;
}
