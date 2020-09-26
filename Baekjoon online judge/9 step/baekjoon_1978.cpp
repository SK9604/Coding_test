//Question URL: https://www.acmicpc.net/problem/1978
#include <iostream>
using namespace std;

int main() {
	int n, k, cnt = 0;
	bool prime;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>k;
		prime = true;
		for(int j = 2; j*j<=k; j++){
			if(k%j == 0){
				prime = false;
				break;
			}
		}
		if(k == 1) prime = false;
		if(prime) cnt++;
	}
	cout<<cnt;
	return 0; 
}
