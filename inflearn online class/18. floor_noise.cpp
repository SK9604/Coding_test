#include <iostream>
using namespace std;

int main() {
	int n,m,input,cnt=0,max=0; 
	cin>>n>>m;
	for(int i = 0; i<n; i++){
		cin>>input;
		if(input>m) {
			cnt++;
			if(cnt>max) max = cnt;
		}
		else cnt=0;
	}
	if(max == 0) max = -1;
	cout<<max;
	return 0;
}
