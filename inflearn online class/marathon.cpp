#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> input(n);
	vector <int> res(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
		res[i] = i+1;
	}
	for(int i = 0; i<n; i++){
		for(int j = i-1; j>=0; j--){
			if(input[i]>input[j]) res[i]--;
		}
	}
	for(int i = 0; i<n; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
