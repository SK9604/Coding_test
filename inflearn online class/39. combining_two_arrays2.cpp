#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,m,ni=0,mi=0,ri=0;
	
	cin>>n;
	vector <int> na(n);
	for(int i = 0; i<n; i++){
		cin>>na[i];
	}
	cin>>m;
	vector <int> ma(m);
	for(int i = 0; i<m; i++){
		cin>>ma[i];
	}
	
	vector <int> res(n+m);
	while(ni<n && mi<m){
		if(na[ni]<ma[mi]){
			res[ri++] = na[ni++];
		}
		else{
			res[ri++] = ma[mi++];
		}
	}
	while(ni<n) res[ri++] = na[ni++];
	while(mi<m) res[ri++] = ma[mi++];
	
	for(int i = 0; i<n+m; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
