#include <iostream>
using namespace std;
int hansu(int n){
	int o,t,h;
	if(n<=99) return 1;
	else if(n==1000) return 0;
	else{
		while(n!=0){
		o = n%10;
		t = n/10%10;
		h = n/100;
		if(o-t == t-h) return 1; 
		else return 0;
		}
	}
	
}
int main() {
	int n,cnt=0;
	cin>>n;
	for(int i = 1; i<=n; i++) {
		cnt+=hansu(i);
	}
	cout<<cnt;
	return 0;
}
