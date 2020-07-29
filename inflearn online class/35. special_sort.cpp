#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> input(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(input[j+1]<0 && input[j]>0){
				int tmp = input[j+1];
				input[j+1] = input[j];
				input[j] = tmp;
			}
		}
	}
	for(int i = 0; i<n; i++){
		cout<<input[i]<<' ';
	}
	return 0;
}
