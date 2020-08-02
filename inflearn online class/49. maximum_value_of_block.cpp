#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n,pos,cnt = 0;
	cin>>n;
	vector <int> side(n);
	vector <int> front(n);
	vector <vector<int> > res(n, vector<int>(n));
	for(int i = 0; i<n; i++){
		cin>>front[i];
	}
	for(int i = 0; i<n; i++){
		cin>>side[i];
	}
	pos = n-1;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			res[i][j] = front[j];
			if(res[i][j]>side[pos]){
				res[i][j] = side[pos];
			}
		}
		pos--;
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cnt+=res[i][j];
		}
	}
	cout<<cnt;
	return 0;
}
