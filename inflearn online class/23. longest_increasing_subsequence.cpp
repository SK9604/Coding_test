#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, cnt = 1, max = -214000000;
	cin>>n;
	vector<int> input(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	for(int i = 1; i<n; i++){
		if(input[i]>=input[i-1]) {
			cnt++;
			if(max < cnt) max = cnt;
		}
		else cnt = 1;
	}
	cout<<max;
	
	return 0;
}
