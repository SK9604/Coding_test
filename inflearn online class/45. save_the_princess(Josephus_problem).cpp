#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,k,cnt=0,pos = -1, bp = 0;
	cin>>n>>k;
	vector <int> p(n);
	while(bp<n-1){
		pos++;
		if(pos >= n) pos = 0;
		if(p[pos] == 0){
			cnt++;
			if(cnt == k){
				p[pos] = 1;
				cnt = 0;
				bp++;
			}
		}
	}
	for(int i = 0; i<n; i++){
		if(p[i]==0) cout<<i+1;
	}
	return 0;
}
