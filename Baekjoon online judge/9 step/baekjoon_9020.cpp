//Question URL : https://www.acmicpc.net/problem/9020
#include <iostream>
using namespace std;

bool isPrime(int l, int r){ //두 수가 모두 소수인지 확인
	bool lprime = true;
	bool rprime = true;
	for(int j = 2; j*j <= l; j++){
		if(l%j == 0){
			lprime = false;
			break;
		}
	}
	if(l == 1) lprime = false;
	if(lprime){
		for(int i = 2; i*i <= r; i++){
			if(r%i == 0){
				rprime = false;
				break;
			}
		}
		if(r == 1) rprime = false;
		if(rprime) return true;
	}
	return false;
}
int main(){
	int n, t;
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>n;
		if(n%2!=0||n>10000) continue;
		int l = n/2, r = n/2; 
		while(1){
			if(!isPrime(l, r)){
				l--; r++;
				if(l == 1) break;
			}
			else {
				cout<<l<<' '<<r<<'\n';
				break;	
			}
		}
	}	
	return 0;
}

