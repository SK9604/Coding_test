// Question URL: https://www.acmicpc.net/problem/2292
#include <iostream>
using namespace std;

int main() {
	int n,t=1,cnt=1,i=1;
	cin>>n;
	
	while(1){
		if(n == 1) break;
		else if(t<n && n<=t+6*i) {
			cnt++;
			break;
		}
		else if(n>t+6*i){
			t=t+6*i;
			cnt++;	
		}
		i++;
	}
	cout<<cnt;
	return 0;
}
