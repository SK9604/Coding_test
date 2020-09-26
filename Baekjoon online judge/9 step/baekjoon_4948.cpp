//Question URL : https://www.acmicpc.net/problem/4948 
#include <iostream>
using namespace std;

int main(){
	int n, cnt = 0;
	while(1){
		cin>>n;
		if(n == 0) break;
		bool prime;
		cnt = 0;
		for(int i = n+1; i<=2*n; i++){
			prime = true;
			for(int j = 2; j*j <= i; j++){
				if(i%j == 0){
					prime = false;
					break;
				}
			}
			if(i == 1) prime = false;
			if(prime) cnt++;
		}
		cout<<cnt<<'\n';
	}
	
	return 0;
}

