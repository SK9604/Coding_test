#include <iostream>
using namespace std;

int main() {
	int input;
	cin>>input;
	int cnt[input]={0};
	for(int i = 1; i<=input; i++){
		for(int j = i; j<=input; j+=i){
			if(j%i==0) cnt[j-1]++;
		}
	}
	for(int i =0; i<input; i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
