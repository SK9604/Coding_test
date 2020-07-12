#include <iostream>
using namespace std;

int main() {
	int n, temp = 0, cnt = 0;
	bool tf;
	cin>>n;
	int input[n];
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	for(int i = 0; i<n-1; i++){
		tf = true;
		for(int j = i+1; j<n; j++){
			if(input[i]<=input[j]){
				tf = false;
				break;	
			}			
		}
		if(tf) cnt++;
	}
	cout<<cnt;	
	return 0;
}
