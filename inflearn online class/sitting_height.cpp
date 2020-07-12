#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0, max;
	cin>>n;
	int input[n];
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	max = input[n-1];
	for(int i = n-2; i>=0; i--){
		if(input[i]>max) {
			cnt++;
			max = input[i];
		}
	}
	cout<<cnt;	
	return 0;
}
