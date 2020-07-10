#include <iostream>
using namespace std;

int main() {
	int n, card, ans;
	cin>>n;
	bool res[n] = {false};
	for(int i = 0; i<n; i++){
		cin>>card>>ans;
		int sum = 0;
		for(int j = 1; j<=card; j++){
			sum+=j;
		}
		if(ans == sum) res[i] = true;
	}
	for(int i = 0; i<n; i++){
		if(res[i]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
