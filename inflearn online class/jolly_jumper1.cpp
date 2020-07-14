#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	bool res;
	cin>>n;
	vector <int> input(n);
	vector <int> jolly(n-1);
	for(int i = 0; i<n-1; i++){
		jolly[i] = i;
	}
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	for(int i = 1; i<n; i++){
		int t = input[i]-input[i-1];
		if(t<0) t = -t;
		for(int j = 1; j<n-1; j++){
			if(t == j) jolly[j] = 0;
		}
	}
	for(int i = 0; i<n-1; i++){
		if(jolly[i]!=0){
			res = false;
			break;
		}
		else res = true;
	}
	if(res) cout<<"YES";
	else cout<<"NO";
	return 0;
}
