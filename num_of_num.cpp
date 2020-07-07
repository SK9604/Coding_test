#include <iostream>
using namespace std;

int digits(int x){
	int cnt = 0;
	if(x<10) cnt++;
	else if(x/10>=1){
		cnt++;
		cnt += digits(x/10);
	}
	return cnt;
}

int main() {
	int n, cnt = 0;
	cin>>n;
	for(int i = 1; i<=n; i++){
		cnt+=digits(i);
	}
	cout<<cnt;
	return 0;
}
