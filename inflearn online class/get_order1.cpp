#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> score(n);
	vector <int> order(n);
	for(int i = 0; i<n; i++){
		cin>>score[i];
		order[i]=n+1;
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(score[i]>=score[j]) order[i]--;
		}
	}
	for(int i = 0; i<n; i++){
		cout<<order[i]<<' ';
	}
	return 0;
}
