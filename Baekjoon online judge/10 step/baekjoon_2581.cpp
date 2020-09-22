//Question URL: https://www.acmicpc.net/problem/2581
#include <iostream>
using namespace std;

int main() {
	int m, n, sum = 0, min = 2147000000;
	bool prime;
	cin>>m>>n;
	for(int i = m; i<=n; i++){
		prime = true;
		for(int j = 2; j*j<=i; j++){
			if(i%j == 0){
				prime = false;
				break;
			}
		}
		if(i == 1) prime = false;
		if(prime) {
			if(i < min) min = i;
			sum+=i;
		}
	}
	if(sum == 0) cout<<-1;
	else cout<<sum<<'\n'<<min;
	return 0; 
}
