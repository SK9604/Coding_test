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
	for(int i = 0; i<input.size(); i++){
		int idx = i;
		for(int j = i+1; j<input.size(); j++){
			if(input[j]<input[i]) idx = j;
		}
		int tmp = input[i];
		input[i] = input[idx];
		input[idx] = tmp;
	}
	for(int i = 0; i<input.size(); i++){
		cout<<input[i]<<' ';
	}
	return 0;
}
