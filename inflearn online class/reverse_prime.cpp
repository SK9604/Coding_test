#include <iostream>
using namespace std;

int reverse(int x){//숫자를 뒤집는 함수
	int res=0;
	while(x!=0){
		res = res*10 + x%10;
		x = x/10;
	}
	return res;
}

bool isPrime(int x){//소수인지 판별하는 함수
	bool res;
	int cnt=0;
	for(int i = 1; i<=x; i++){
		if(x%i == 0) {
			cnt++;
		}
	}
	if(cnt>2||x==1) res = false;
	else res = true;
	return res;
}
int main() {
	int n, input, res;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>input;
		res = reverse(input);
		bool b = isPrime(res);
		if(b == true) cout<<res<<' ';
		else continue;
	}
	return 0;
}
