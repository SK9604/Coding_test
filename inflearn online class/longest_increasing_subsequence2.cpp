#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, now, pre, cnt = 1, max = -214000000;
	cin>>n;
	cin>>pre;
	for(int i = 1; i<n; i++){
		cin>>now;
		if(now>=pre){
			cnt++;
			if(max < cnt) max = cnt;
		}
		else cnt = 1;
		pre = now;
	}
	cout<<max;
	
	return 0;
}
