#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, idx, tmp, rank=1, score;
	cin>>n;
	vector <int> input(n);
	for(int i = 0; i<n; i++){
		cin>>input[i];
	}
	for(int i = 0; i<n; i++){
		idx = i;
		for(int j = i+1; j<n; j++){
			if(input[j]>=input[idx]) idx = j;
		}
		tmp = input[idx];
		input[idx] = input[i];
		input[i] = tmp;
	}
	for(int i = 1; i<n; i++){
		if(input[i]==input[i-1]) continue;
		else rank++;
		if(rank == 3) score = input[i];
	}
	cout<<score;
	return 0;
}
