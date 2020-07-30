#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, np=0, mp=0, rp=0, cnt=0;

	cin>>n;
	vector <int> na(n);
	for(int i = 0; i<n; i++){
		cin>>na[i];
	}
	sort(na.begin(), na.end());
	cin>>m;
	vector <int> ma(m);
	for(int i = 0; i<m; i++){
		cin>>ma[i];
	}
	sort(ma.begin(), ma.end());
	
	vector <int> res(n+m);
	while(mp < m && np < n){
		if(ma[mp] == na[np]){
			res[rp++] = ma[mp++];
			np++;
		}
		else if(na[np]<ma[mp]) np++;
		else mp++;
	}
	
	for(int i = 0; i<rp; i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
