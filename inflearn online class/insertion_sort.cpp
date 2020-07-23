#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,j;
	cin>>n;
	vector <int> input(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	
	for(int i = 1; i<n; i++){
		int tmp = input[i];
		for(j=i-1; j>=0; j--){
			if(input[j]>tmp)	input[j+1] = input[j];
			else break;
		}
		input[j+1] = tmp;
	}
	
	for(int i = 0; i<n; i++){
		cout<<input[i]<<' ';
	}
	return 0;
}
