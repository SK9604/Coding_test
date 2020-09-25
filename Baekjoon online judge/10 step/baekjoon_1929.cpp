//Question URL : https://www.acmicpc.net/problem/1929 
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>m>>n;
	bool prime;
	for(int i = m; i<=n; i++){
		prime = true;
		for(int j = 2; j*j <= i; j++){
			if(i%j == 0){
				prime = false;
				break;
			}
		}
		if(i == 1) prime = false;
		if(prime) {
			cout<<i<<'\n';
		}
	}
	return 0;
}

