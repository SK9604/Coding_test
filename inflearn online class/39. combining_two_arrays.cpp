#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,m,ni=0,mi=0;
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
	for(int i = 0; i<n+m; i++){
		if(ni==n){
			res[i] = ma[mi];
			mi++;
		}
		else if(mi==m){
			res[i] = na[ni];
			ni++;
		}
		else if(na[ni]<ma[mi]){
			res[i] = na[ni];
			ni++;
		}
		else{
			res[i] = ma[mi];
			mi++;
		}
	}
	for(int i = 0; i<n+m; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
